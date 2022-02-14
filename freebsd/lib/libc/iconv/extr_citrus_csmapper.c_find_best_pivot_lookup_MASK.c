
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parse_arg {unsigned long norm; char* dst; } ;
struct _region {int dummy; } ;
struct _lookup {int dummy; } ;
typedef int pivot_min ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct _lookup*) ;
 int FUNC_1 (struct _lookup*,char const*,struct _region*) ;
 int FUNC_2 (struct _lookup*,int *,struct _region*) ;
 int FUNC_3 (struct _lookup**,int ,int ) ;
 int FUNC_4 (struct parse_arg*,char const*) ;
 int FUNC_5 (struct parse_arg*,struct _region*) ;
 int FUNC_6 (char*,char*,size_t) ;

__attribute__((used)) static int
FUNC_7(const char *VAR_5, const char *VAR_6, char *VAR_7,
    size_t VAR_8, unsigned long *VAR_9)
{
 struct _lookup *VAR_10;
 struct _region VAR_11;
 struct parse_arg VAR_12;
 char VAR_13[VAR_2];
 unsigned long VAR_14;
 int VAR_15;

 VAR_15 = FUNC_3(&VAR_10, VAR_0, VAR_4);
 if (VAR_15)
  return (VAR_15);

 VAR_14 = VAR_3;


 VAR_15 = FUNC_1(VAR_10, VAR_5, &VAR_11);
 while (VAR_15 == 0) {
  VAR_15 = FUNC_5(&VAR_12, &VAR_11);
  if (VAR_15)
   break;
  VAR_15 = FUNC_4(&VAR_12, VAR_6);
  if (VAR_15)
   break;
  if (VAR_12.norm < VAR_14) {
   VAR_14 = VAR_12.norm;
   FUNC_6(VAR_13, VAR_12.dst, sizeof(VAR_13));
  }
  VAR_15 = FUNC_2(VAR_10, ((void*)0), &VAR_11);
 }
 FUNC_0(VAR_10);

 if (VAR_15 != VAR_1)
  return (VAR_15);
 if (VAR_14 == VAR_3)
  return (VAR_1);
 FUNC_6(VAR_7, VAR_13, VAR_8);
 if (VAR_9)
  *VAR_9 = VAR_14;

 return (0);
}
