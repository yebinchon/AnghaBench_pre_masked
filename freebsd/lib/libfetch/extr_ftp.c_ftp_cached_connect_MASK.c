
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct url {int scheme; scalar_t__ port; } ;
typedef int conn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 int * FUNC_3 (struct url*,struct url*,char const*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct url*) ;
 int FUNC_6 (int *,struct url*,int) ;

__attribute__((used)) static conn_t *
FUNC_7(struct url *VAR_4, struct url *VAR_5, const char *VAR_6)
{
 conn_t *VAR_7;
 int VAR_8;


 if (!VAR_4->port)
  VAR_4->port = FUNC_0(VAR_4->scheme);


 if (FUNC_5(VAR_4)) {
  VAR_8 = FUNC_2(VAR_2, "NOOP");
  if (VAR_8 == VAR_0 || VAR_8 == VAR_1)
   return (FUNC_1(VAR_2));
 }


 if ((VAR_7 = FUNC_3(VAR_4, VAR_5, VAR_6)) == ((void*)0))
  return (((void*)0));
 if (VAR_2)
  FUNC_4(VAR_2);
 VAR_2 = FUNC_1(VAR_7);
 FUNC_6(&VAR_3, VAR_4, sizeof(*VAR_4));
 return (VAR_7);
}
