
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mempolicy {unsigned short mode; unsigned short flags; int refcnt; } ;
typedef int nodemask_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct mempolicy* FUNC_0 (int ) ;
 int VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 unsigned short VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int) ;
 struct mempolicy* FUNC_3 (int ,int ) ;
 int* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_7 ;
 int FUNC_6 (char*,unsigned short,unsigned short,int) ;

__attribute__((used)) static struct mempolicy *FUNC_7(unsigned short VAR_8, unsigned short VAR_9,
      nodemask_t *VAR_10)
{
 struct mempolicy *VAR_11;

 FUNC_6("setting mode %d flags %d nodes[0] %lx\n",
   VAR_8, VAR_9, VAR_10 ? FUNC_4(*VAR_10)[0] : -1);

 if (VAR_8 == VAR_3) {
  if (VAR_10 && !FUNC_5(*VAR_10))
   return FUNC_0(-VAR_0);
  return ((void*)0);
 }
 FUNC_1(!VAR_10);






 if (VAR_8 == VAR_6) {
  if (FUNC_5(*VAR_10)) {
   if (((VAR_9 & VAR_5) ||
        (VAR_9 & VAR_4)))
    return FUNC_0(-VAR_0);
  }
 } else if (FUNC_5(*VAR_10))
  return FUNC_0(-VAR_0);
 VAR_11 = FUNC_3(VAR_7, VAR_2);
 if (!VAR_11)
  return FUNC_0(-VAR_1);
 FUNC_2(&VAR_11->refcnt, 1);
 VAR_11->mode = VAR_8;
 VAR_11->flags = VAR_9;

 return VAR_11;
}
