
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroup_subsys {char* name; int disabled; } ;
struct cgroup_sb_opts {unsigned long subsys_bits; int none; unsigned long flags; void* name; void* release_agent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned long VAR_8 ;
 scalar_t__ FUNC_0 (char) ;
 void* FUNC_1 (char const*,int ,int ) ;
 int FUNC_2 (struct cgroup_sb_opts*,int ,int) ;
 int FUNC_3 (int,unsigned long*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (char*,char*,int) ;
 char* FUNC_7 (char**,char*) ;
 struct cgroup_subsys** VAR_9 ;
 scalar_t__ FUNC_8 (int,unsigned long*) ;

__attribute__((used)) static int FUNC_9(char *VAR_10,
         struct cgroup_sb_opts *VAR_11)
{
 char *VAR_12, *VAR_13 = VAR_10 ?: "all";
 unsigned long VAR_14 = (unsigned long)-1;





 FUNC_2(VAR_11, 0, sizeof(*VAR_11));

 while ((VAR_12 = FUNC_7(&VAR_13, ",")) != ((void*)0)) {
  if (!*VAR_12)
   return -VAR_1;
  if (!FUNC_4(VAR_12, "all")) {

   int VAR_15;
   VAR_11->subsys_bits = 0;
   for (VAR_15 = 0; VAR_15 < VAR_0; VAR_15++) {
    struct cgroup_subsys *VAR_16 = VAR_9[VAR_15];
    if (!VAR_16->disabled)
     VAR_11->subsys_bits |= 1ul << VAR_15;
   }
  } else if (!FUNC_4(VAR_12, "none")) {

   VAR_11->none = 1;
  } else if (!FUNC_4(VAR_12, "noprefix")) {
   FUNC_3(VAR_7, &VAR_11->flags);
  } else if (!FUNC_6(VAR_12, "release_agent=", 14)) {

   if (VAR_11->release_agent)
    return -VAR_1;
   VAR_11->release_agent =
    FUNC_1(VAR_12 + 14, VAR_6, VAR_4);
   if (!VAR_11->release_agent)
    return -VAR_3;
  } else if (!FUNC_6(VAR_12, "name=", 5)) {
   int VAR_17;
   const char *VAR_18 = VAR_12 + 5;

   if (!FUNC_5(VAR_18))
    return -VAR_1;

   for (VAR_17 = 0; VAR_17 < FUNC_5(VAR_18); VAR_17++) {
    char VAR_19 = VAR_18[VAR_17];
    if (FUNC_0(VAR_19))
     continue;
    if ((VAR_19 == '.') || (VAR_19 == '-') || (VAR_19 == '_'))
     continue;
    return -VAR_1;
   }

   if (VAR_11->name)
    return -VAR_1;
   VAR_11->name = FUNC_1(VAR_18,
           VAR_5,
           VAR_4);
   if (!VAR_11->name)
    return -VAR_3;
  } else {
   struct cgroup_subsys *VAR_20;
   int VAR_21;
   for (VAR_21 = 0; VAR_21 < VAR_0; VAR_21++) {
    VAR_20 = VAR_9[VAR_21];
    if (!FUNC_4(VAR_12, VAR_20->name)) {
     if (!VAR_20->disabled)
      FUNC_3(VAR_21, &VAR_11->subsys_bits);
     break;
    }
   }
   if (VAR_21 == VAR_0)
    return -VAR_2;
  }
 }
 if (FUNC_8(VAR_7, &VAR_11->flags) &&
     (VAR_11->subsys_bits & VAR_14))
  return -VAR_1;



 if (VAR_11->subsys_bits && VAR_11->none)
  return -VAR_1;





 if (!VAR_11->subsys_bits && !VAR_11->name)
  return -VAR_1;

 return 0;
}
