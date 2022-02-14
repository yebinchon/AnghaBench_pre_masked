
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
typedef int sbintime_t ;
typedef scalar_t__ cloudabi_timestamp_t ;
typedef int cloudabi_clockid_t ;


 int FUNC_0 (struct thread*,int ,scalar_t__*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int
FUNC_2(struct thread *VAR_0, cloudabi_clockid_t VAR_1,
    cloudabi_timestamp_t VAR_2, cloudabi_timestamp_t VAR_3,
    sbintime_t *VAR_4, sbintime_t *VAR_5, bool VAR_6)
{
 cloudabi_timestamp_t VAR_7;
 int VAR_8;

 if (VAR_6) {

  VAR_8 = FUNC_0(VAR_0, VAR_1, &VAR_7);
  if (VAR_8 != 0)
   return (VAR_8);
  VAR_2 = VAR_2 < VAR_7 ? 0 : VAR_2 - VAR_7;
 }

 *VAR_4 = FUNC_1(VAR_2);
 *VAR_5 = FUNC_1(VAR_3);
 return (0);
}
