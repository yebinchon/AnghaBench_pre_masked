
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ zprop_source_t ;
struct libbe_dccb {int props; int lbh; int zhp; } ;
typedef int source ;
typedef int pval ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 char* FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (int ,int,char*,int,scalar_t__*,char*,int,int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(int VAR_6, void *VAR_7)
{
 int VAR_8;
        struct libbe_dccb *VAR_9;
 zprop_source_t VAR_10;
 char VAR_11[VAR_0];
 char VAR_12[VAR_0];
 char *VAR_13;

 VAR_9 = VAR_7;

 if (VAR_6 == VAR_1)
  return (VAR_3);


 if (FUNC_3(VAR_6))
  return (VAR_3);

 if ((VAR_8 = FUNC_2(VAR_9->zhp, VAR_6, (char *)&VAR_11,
     sizeof(VAR_11), &VAR_10, (char *)&VAR_12, sizeof(VAR_12), 0)))

  return (VAR_3);






 if (VAR_10 != VAR_4 && VAR_10 != VAR_5)
  return (VAR_3);


 VAR_13 = VAR_11;
 if (VAR_6 == VAR_2)
  VAR_13 = FUNC_0(VAR_9->lbh, VAR_13);

 FUNC_1(VAR_9->props, FUNC_4(VAR_6), VAR_13);

 return (VAR_3);
}
