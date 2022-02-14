
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int file_pair ;
struct TYPE_2__ {scalar_t__ avail_in; int total_in; int total_out; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *,int ) ;
 scalar_t__ FUNC_1 (int *,int *,scalar_t__) ;
 int FUNC_2 () ;
 TYPE_1__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static bool
FUNC_3(file_pair *VAR_5)
{
 while (VAR_3.avail_in != 0) {
  if (VAR_4)
   return 0;

  if (FUNC_1(VAR_5, &VAR_2, VAR_3.avail_in))
   return 0;

  VAR_3.total_in += VAR_3.avail_in;
  VAR_3.total_out = VAR_3.total_in;
  FUNC_2();

  VAR_3.avail_in = FUNC_0(VAR_5, &VAR_2, VAR_0);
  if (VAR_3.avail_in == VAR_1)
   return 0;
 }

 return 1;
}
