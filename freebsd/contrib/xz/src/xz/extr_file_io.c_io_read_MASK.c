
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ssize_t ;
typedef int io_wait_ret ;
struct TYPE_6__ {int * u8; } ;
typedef TYPE_1__ io_buf ;
struct TYPE_7__ {int src_eof; int src_name; int src_fd; } ;
typedef TYPE_2__ file_pair ;


 scalar_t__ VAR_0 ;



 scalar_t__ FUNC_0 (scalar_t__) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int *,size_t) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ VAR_4 ;

extern size_t
FUNC_9(file_pair *VAR_5, io_buf *VAR_6, size_t VAR_7)
{

 FUNC_2(VAR_7 < VAR_2);

 uint8_t *VAR_8 = VAR_6->u8;
 size_t VAR_9 = VAR_7;

 while (VAR_9 > 0) {
  const ssize_t VAR_10 = FUNC_7(VAR_5->src_fd, VAR_8, VAR_9);

  if (VAR_10 == 0) {
   VAR_5->src_eof = 1;
   break;
  }

  if (VAR_10 == -1) {
   if (VAR_3 == VAR_0) {
    if (VAR_4)
     return VAR_1;

    continue;
   }


   if (FUNC_0(VAR_3)) {
    const io_wait_ret VAR_11 = FUNC_3(VAR_5,
      FUNC_6(),
      1);
    switch (VAR_11) {
    case 129:
     continue;

    case 130:
     return VAR_1;

    case 128:
     return VAR_7 - VAR_9;

    default:
     FUNC_4();
    }
   }


   FUNC_5(FUNC_1("%s: Read error: %s"),
     VAR_5->src_name, FUNC_8(VAR_3));

   return VAR_1;
  }

  VAR_8 += (size_t)(VAR_10);
  VAR_9 -= (size_t)(VAR_10);
 }

 return VAR_7 - VAR_9;
}
