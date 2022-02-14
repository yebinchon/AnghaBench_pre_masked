
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssh {int dummy; } ;
typedef int Channel ;


 int * FUNC_0 (struct ssh*,int) ;
 int FUNC_1 (struct ssh*,char const*,char const*) ;
 int FUNC_2 (struct ssh*,char*,char const*,int) ;

__attribute__((used)) static Channel *
FUNC_3(struct ssh *VAR_0, const char *VAR_1, const char *VAR_2)
{
 int VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
 Channel *VAR_4;

 if ((VAR_4 = FUNC_0(VAR_0, VAR_3)) == ((void*)0)) {
  FUNC_2(VAR_0,
      "%s packet referred to nonexistent channel %d", VAR_2, VAR_3);
 }
 return VAR_4;
}
