
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ssize_t ;
struct TYPE_4__ {int dest_name; int dest_fd; } ;
typedef TYPE_1__ file_pair ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 size_t VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (TYPE_1__*,int,int) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (int ,int const*,size_t) ;

__attribute__((used)) static bool
FUNC_7(file_pair *VAR_6, const uint8_t *VAR_7, size_t VAR_8)
{
 FUNC_2(VAR_8 < VAR_3);

 while (VAR_8 > 0) {
  const ssize_t VAR_9 = FUNC_6(VAR_6->dest_fd, VAR_7, VAR_8);
  if (VAR_9 == -1) {
   if (VAR_4 == VAR_0) {
    if (VAR_5)
     return 1;

    continue;
   }


   if (FUNC_0(VAR_4)) {
    if (FUNC_3(VAR_6, -1, 0) == VAR_2)
     continue;

    return 1;
   }
   if (VAR_4 != VAR_1)
    FUNC_4(FUNC_1("%s: Write error: %s"),
     VAR_6->dest_name, FUNC_5(VAR_4));

   return 1;
  }

  VAR_7 += (size_t)(VAR_9);
  VAR_8 -= (size_t)(VAR_9);
 }

 return 0;
}
