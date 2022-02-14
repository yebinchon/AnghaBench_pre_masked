
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_char ;
struct TYPE_14__ {int path; } ;
struct TYPE_13__ {int id; int type; } ;
struct TYPE_15__ {TYPE_2__ path; TYPE_1__ ipc; } ;
struct TYPE_16__ {int id; scalar_t__ len; TYPE_3__ tt; } ;
typedef TYPE_4__ tokenstr_t ;
typedef int tok ;
typedef int FILE ;
 scalar_t__ FUNC_0 (int,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_4__*,int *,int) ;
 int FUNC_2 (int *,int **) ;
 int FUNC_3 (TYPE_4__*,TYPE_4__*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int,int,int ) ;
 int VAR_1 ;
 int FUNC_6 (int ,int*) ;
 int FUNC_7 (TYPE_4__,int*) ;
 int FUNC_8 (int ,int ,int*) ;
 int FUNC_9 (TYPE_4__,int*) ;
 int FUNC_10 (TYPE_4__,TYPE_4__,int*) ;
 int FUNC_11 (TYPE_4__,int*) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_12(FILE *VAR_3)
{
 tokenstr_t VAR_4;
 u_char *VAR_5;
 tokenstr_t VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;
 uint32_t VAR_10;
 int VAR_11;

 int VAR_12 = 0;
 while ((VAR_7 = FUNC_2(VAR_3, &VAR_5)) != -1) {
  VAR_10 = 0;
  VAR_8 = 0;
  VAR_9 = 1;
  while ((VAR_9 == 1) && (VAR_8 < VAR_7)) {
   if (-1 == FUNC_1(&VAR_6, VAR_5 + VAR_8,
       VAR_7 - VAR_8)) {

    VAR_12 = 1;
    break;
   }





   switch(VAR_6.id) {
   case 133:
     VAR_9 = FUNC_7(VAR_6,
         &VAR_10);
     FUNC_3(&VAR_6, &VAR_4,
         sizeof(VAR_6));
     break;

   case 130:
     VAR_9 = FUNC_9(VAR_6,
         &VAR_10);
     break;

   case 128:
     VAR_9 = FUNC_11(VAR_6,
         &VAR_10);
     break;

   case 132:
     VAR_9 = FUNC_8(
         VAR_6.tt.ipc.type, VAR_6.tt.ipc.id,
         &VAR_10);
     break;

   case 131:
     VAR_9 = FUNC_6(
         VAR_6.tt.path.path, &VAR_10);
     break;

   case 129:
    VAR_9 = FUNC_10(VAR_6,
        VAR_4, &VAR_10);
    break;

   default:
    break;
   }
   VAR_8 += VAR_6.len;
  }

  VAR_11 = ((VAR_9 == 1) && (!VAR_12) && (!(VAR_1 & ~VAR_10)));
  if (FUNC_0(VAR_1, VAR_0))
   VAR_11 = !VAR_11;
  if (VAR_11)
   (void) FUNC_5(VAR_5, 1, VAR_7, VAR_2);
  FUNC_4(VAR_5);
 }
 return (0);
}
