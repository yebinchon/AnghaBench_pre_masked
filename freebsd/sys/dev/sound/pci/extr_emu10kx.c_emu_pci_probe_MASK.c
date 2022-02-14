
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct sbuf {int dummy; } ;
typedef int device_t ;
struct TYPE_2__ {int SBcode; int desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 TYPE_1__* VAR_4 ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct sbuf*) ;
 int FUNC_4 (struct sbuf*) ;
 int FUNC_5 (struct sbuf*) ;
 struct sbuf* FUNC_6 (int *,int *,int,int ) ;
 int FUNC_7 (struct sbuf*,char*,int ,int ) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_5)
{
 struct sbuf *VAR_6;
 unsigned int VAR_7 = 0;
 uint16_t VAR_8;

 VAR_8 = FUNC_2(VAR_5, VAR_3, 2);
 if (VAR_8 != 0x1102)
  return (VAR_2);

 VAR_7 = FUNC_1(VAR_5);
 if (VAR_7 == 0)
  return (VAR_2);

 VAR_6 = FUNC_6(((void*)0), ((void*)0), 4096, 0);
 if (VAR_6 == ((void*)0))
  return (VAR_1);
 FUNC_7(VAR_6, "Creative %s [%s]", VAR_4[VAR_7].desc, VAR_4[VAR_7].SBcode);
 FUNC_5(VAR_6);

 FUNC_0(VAR_5, FUNC_3(VAR_6));

 FUNC_4(VAR_6);

 return (VAR_0);
}
