
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int bd_unit; } ;
typedef TYPE_1__ bdinfo_t ;
struct TYPE_8__ {char* dv_name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_1 ;
 TYPE_4__ VAR_2 ;
 TYPE_1__* FUNC_4 (int,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_6 (char*,char,char*,int) ;

__attribute__((used)) static int
FUNC_7(void)
{
 int VAR_4, VAR_5;
 bdinfo_t *VAR_6;

 VAR_4 = 0x80;
 for (VAR_5 = 0; VAR_5 < *(unsigned char *)FUNC_0(VAR_0); VAR_5++) {



  if ((VAR_6 = FUNC_4(1, sizeof(*VAR_6))) == ((void*)0))
   break;
  VAR_6->bd_unit = VAR_4 + VAR_5;
  if (!FUNC_3(VAR_6)) {
   FUNC_5(VAR_6);
   break;
  }

  FUNC_6("BIOS drive %c: is %s%d\n", ('C' + VAR_5),
      VAR_2.dv_name, VAR_5);

  FUNC_1(&VAR_3, VAR_6, VAR_1);
 }
 FUNC_2(VAR_5);
 return (0);
}
