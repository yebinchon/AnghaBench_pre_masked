
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_2__ {scalar_t__ e_machine; } ;
struct readelf {TYPE_1__ ehdr; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;

 int FUNC_0 (int ,size_t const) ;
 int VAR_3 ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (size_t,int) ;

__attribute__((used)) static void
FUNC_3(struct readelf *VAR_4, const char *VAR_5, size_t VAR_6)
{
 size_t VAR_7;
 uint32_t VAR_8, VAR_9;

 FUNC_1("      Properties: ");
 while (VAR_6 > 0) {
  if (VAR_6 < 8)
   goto bad;

  VAR_8 = *(const uint32_t *)(const void *)VAR_5;
  VAR_9 = *(const uint32_t *)(const void *)(VAR_5 + 4);
  VAR_5 += 8;
  VAR_6 -= 8;

  if (VAR_9 > VAR_6)
   goto bad;

  if (VAR_8 >= VAR_2 &&
      VAR_8 <= VAR_1) {
   if (VAR_4->ehdr.e_machine != VAR_0) {
    FUNC_1("machine type %x unknown\n",
        VAR_4->ehdr.e_machine);
    goto unknown;
   }
   switch (VAR_8) {
   case 128:
    FUNC_1("x86 features:");
    if (VAR_9 != 4)
     goto bad;
    FUNC_0(VAR_3,
        *(const uint32_t *)(const void *)VAR_5);
    break;
   }
  }

  VAR_5 += FUNC_2(VAR_9, 8);
  VAR_6 -= FUNC_2(VAR_9, 8);
 }
 return;
bad:
 FUNC_1("corrupt GNU property\n");
unknown:
 FUNC_1("remaining description data:");
 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
  FUNC_1(" %02x", (unsigned char)VAR_5[VAR_7]);
 FUNC_1("\n");
}
