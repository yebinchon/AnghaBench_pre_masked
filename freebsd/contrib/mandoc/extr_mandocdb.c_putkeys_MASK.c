
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct str {int mask; struct mpage const* mpage; int key; } ;
struct ohash {int dummy; } ;
struct mpage {TYPE_1__* mlinks; } ;
struct TYPE_2__ {int file; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 struct str* FUNC_1 (int,int) ;
 int * VAR_4 ;
 int FUNC_2 (int ,char*,size_t) ;
 int VAR_5 ;
 struct ohash VAR_6 ;
 struct str* FUNC_3 (struct ohash*,unsigned int) ;
 int FUNC_4 (struct ohash*,unsigned int,struct str*) ;
 unsigned int FUNC_5 (struct ohash*,char*,char const**) ;
 int FUNC_6 (char**,size_t*) ;
 int FUNC_7 (int ,char*,int,...) ;
 struct ohash VAR_7 ;

__attribute__((used)) static void
FUNC_8(const struct mpage *VAR_8, char *VAR_9, size_t VAR_10, uint64_t VAR_11)
{
 struct ohash *VAR_12;
 struct str *VAR_13;
 const char *VAR_14;
 unsigned int VAR_15;
 int VAR_16, VAR_17;

 if (0 == VAR_10)
  return;

 VAR_17 = FUNC_6(&VAR_9, &VAR_10);

 if (VAR_2 & VAR_11) {
  VAR_12 = &VAR_6;
  VAR_11 &= VAR_5;
  if (VAR_11 & VAR_1)
   VAR_5 &= ~VAR_1;
  if (VAR_3 > 1)
   FUNC_7(VAR_8->mlinks->file,
       "Adding name %*s, bits=0x%llx", (int)VAR_10, VAR_9,
       (unsigned long long)VAR_11);
 } else {
  VAR_12 = &VAR_7;
  if (VAR_3 > 1)
      for (VAR_16 = 0; VAR_16 < VAR_0; VAR_16++)
   if ((uint64_t)1 << VAR_16 & VAR_11)
       FUNC_7(VAR_8->mlinks->file,
    "Adding key %s=%*s",
    VAR_4[VAR_16], (int)VAR_10, VAR_9);
 }

 VAR_14 = VAR_9 + VAR_10;
 VAR_15 = FUNC_5(VAR_12, VAR_9, &VAR_14);
 VAR_13 = FUNC_3(VAR_12, VAR_15);

 if (((void*)0) != VAR_13 && VAR_8 == VAR_13->mpage) {
  VAR_13->mask |= VAR_11;
  return;
 } else if (((void*)0) == VAR_13) {
  VAR_13 = FUNC_1(1, sizeof(struct str) + VAR_10 + 1);
  FUNC_2(VAR_13->key, VAR_9, VAR_10);
  FUNC_4(VAR_12, VAR_15, VAR_13);
 }
 VAR_13->mpage = VAR_8;
 VAR_13->mask = VAR_11;

 if (VAR_17)
  FUNC_0(VAR_9);
}
