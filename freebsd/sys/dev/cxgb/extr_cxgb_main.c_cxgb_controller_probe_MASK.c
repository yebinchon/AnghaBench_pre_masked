
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter_info {int nports0; int nports1; char* desc; } ;
typedef int device_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 struct adapter_info* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,int,char*,char*,int,char*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2)
{
 const struct adapter_info *VAR_3;
 char *VAR_4, VAR_5[80];
 int VAR_6;

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3 == ((void*)0))
  return (VAR_1);

 VAR_6 = VAR_3->nports0 + VAR_3->nports1;
 if (VAR_6 == 1)
  VAR_4 = "port";
 else
  VAR_4 = "ports";

 FUNC_2(VAR_5, sizeof(VAR_5), "%s, %d %s", VAR_3->desc, VAR_6, VAR_4);
 FUNC_1(VAR_2, VAR_5);
 return (VAR_0);
}
