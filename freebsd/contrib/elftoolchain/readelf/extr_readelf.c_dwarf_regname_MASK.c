
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int e_machine; } ;
struct readelf {TYPE_1__ ehdr; } ;
typedef int rx ;


 char* FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (char*,int,char*,unsigned int) ;

__attribute__((used)) static const char *
FUNC_2(struct readelf *VAR_0, unsigned int VAR_1)
{
 static char VAR_2[32];
 const char *VAR_3;

 if ((VAR_3 = FUNC_0(VAR_0->ehdr.e_machine, VAR_1)) != ((void*)0))
  return (VAR_3);

 FUNC_1(VAR_2, sizeof(VAR_2), "r%u", VAR_1);

 return (VAR_2);
}
