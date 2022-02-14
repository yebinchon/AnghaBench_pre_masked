
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct debuginfo {scalar_t__ dwfl; int dbg; int bias; } ;
typedef int Dwfl_Module ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 (scalar_t__,char*,char*,int) ;
 int FUNC_5 (struct debuginfo*,int ,int) ;
 int VAR_2 ;
 int FUNC_6 (char const*,int ) ;

__attribute__((used)) static int FUNC_7(struct debuginfo *VAR_3,
      const char *VAR_4)
{
 Dwfl_Module *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_6(VAR_4, VAR_1);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_3->dwfl = FUNC_1(&VAR_2);
 if (!VAR_3->dwfl)
  goto error;

 VAR_5 = FUNC_4(VAR_3->dwfl, "", "", VAR_6);
 if (!VAR_5)
  goto error;

 VAR_3->dbg = FUNC_3(VAR_5, &VAR_3->bias);
 if (!VAR_3->dbg)
  goto error;

 return 0;
error:
 if (VAR_3->dwfl)
  FUNC_2(VAR_3->dwfl);
 else
  FUNC_0(VAR_6);
 FUNC_5(VAR_3, 0, sizeof(*VAR_3));

 return -VAR_0;
}
