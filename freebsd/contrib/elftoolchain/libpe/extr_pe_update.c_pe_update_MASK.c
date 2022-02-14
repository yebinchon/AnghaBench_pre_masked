
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int off_t ;
struct TYPE_9__ {scalar_t__ pe_cmd; int pe_flags; scalar_t__ pe_obj; int pe_fd; } ;
typedef TYPE_1__ PE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*,int) ;
 scalar_t__ FUNC_7 (int ,int ,int ) ;

off_t
FUNC_8(PE *VAR_12)
{
 off_t VAR_13;

 if (VAR_12 == ((void*)0)) {
  VAR_11 = VAR_1;
  return (-1);
 }

 if (VAR_12->pe_cmd == VAR_6 || VAR_12->pe_flags & VAR_3) {
  VAR_11 = VAR_0;
  return (-1);
 }

 if (VAR_12->pe_cmd == VAR_5 || (VAR_12->pe_cmd == VAR_7 &&
  (VAR_12->pe_flags & VAR_4) == 0)) {
  if (FUNC_7(VAR_12->pe_fd, 0, VAR_10) < 0) {
   VAR_11 = VAR_2;
   return (-1);
  }
 }

 VAR_13 = 0;

 if (VAR_12->pe_obj == VAR_8 || VAR_12->pe_obj == VAR_9) {
  if ((VAR_13 = FUNC_3(VAR_12, VAR_13)) < 0)
   return (-1);

  if ((VAR_13 = FUNC_4(VAR_12, VAR_13)) < 0)
   return (-1);
 }

 if (FUNC_1(VAR_12, VAR_13) < 0)
  return (-1);

 if ((VAR_13 = FUNC_2(VAR_12, VAR_13)) < 0)
  return (-1);

 if ((VAR_13 = FUNC_5(VAR_12, VAR_13)) < 0)
  return (-1);

 if ((VAR_13 = FUNC_6(VAR_12, VAR_13)) < 0)
  return (-1);

 if (FUNC_0(VAR_12->pe_fd, VAR_13) < 0) {
  VAR_11 = VAR_2;
  return (-1);
 }

 return (VAR_13);
}
