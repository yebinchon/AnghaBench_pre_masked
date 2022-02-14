
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct xlocale_collate {int __collate_load_error; } ;
struct TYPE_2__ {scalar_t__* components; } ;


 size_t VAR_0 ;
 int FUNC_0 (int,int) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (char*,int,int) ;

__attribute__((used)) static const u_char *
FUNC_3(char *VAR_1, const u_char *VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6;
 struct xlocale_collate *VAR_7 =
  (struct xlocale_collate*)FUNC_1()->components[VAR_0];


 VAR_3 = *VAR_2++;
 if (VAR_3 == '^') {
  VAR_5 = 1;
  VAR_3 = *VAR_2++;
 } else
  VAR_5 = 0;


 (void) FUNC_2(VAR_1, VAR_5, 256);

 if (VAR_3 == 0)
  return (VAR_2 - 1);
 VAR_5 = 1 - VAR_5;
 for (;;) {
  VAR_1[VAR_3] = VAR_5;
doswitch:
  VAR_4 = *VAR_2++;
  switch (VAR_4) {

  case 0:
   return (VAR_2 - 1);

  case '-':
   VAR_4 = *VAR_2;
   if (VAR_4 == ']'
       || (VAR_7->__collate_load_error ? VAR_4 < VAR_3 :
    FUNC_0(VAR_4, VAR_3) < 0
          )
      ) {
    VAR_3 = '-';
    break;
   }
   VAR_2++;

   if (VAR_7->__collate_load_error) {
    do {
     VAR_1[++VAR_3] = VAR_5;
    } while (VAR_3 < VAR_4);
   } else {
    for (VAR_6 = 0; VAR_6 < 256; VAR_6 ++)
     if (FUNC_0(VAR_3, VAR_6) <= 0 &&
         FUNC_0(VAR_6, VAR_4) <= 0
        )
      VAR_1[VAR_6] = VAR_5;
   }

   VAR_3 = VAR_4;





   goto doswitch;







   break;

  case ']':
   return (VAR_2);

  default:
   VAR_3 = VAR_4;
   break;
  }
 }

}
