
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int c_status; scalar_t__ c_data; scalar_t__ c_off; scalar_t__ c_len; int c_plen; int c_name; } ;
typedef TYPE_1__ con ;


 int VAR_0 ;
 int VAR_1 ;

 size_t FUNC_0 (int ,int,scalar_t__,scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int FUNC_4 (char*,int ,char*) ;
 int FUNC_5 (char*,int) ;
 TYPE_1__* VAR_3 ;
 int FUNC_6 (int) ;
 int VAR_4 ;
 char* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (scalar_t__) ;

__attribute__((used)) static void
FUNC_9(int VAR_5)
{
 con *VAR_6 = &VAR_3[VAR_5];
 size_t VAR_7;

 if (VAR_6->c_status == VAR_0) {
  FUNC_2(VAR_5);
  return;
 }
 VAR_7 = FUNC_0(VAR_4, VAR_5, VAR_6->c_data + VAR_6->c_off, VAR_6->c_len - VAR_6->c_off);
 if (VAR_7 == 0) {
  FUNC_4("read (%s): %s", VAR_6->c_name, FUNC_7(VAR_2));
  FUNC_1(VAR_5);
  return;
 }
 VAR_6->c_off += VAR_7;

 if (VAR_6->c_off == VAR_6->c_len)
  switch (VAR_6->c_status) {
  case 128:
   VAR_6->c_plen = FUNC_6(VAR_6->c_plen);
   VAR_6->c_len = VAR_6->c_plen + 8 - (VAR_6->c_plen & 7);
   VAR_6->c_off = 0;
   VAR_6->c_data = FUNC_8(VAR_6->c_len);
   VAR_6->c_status = VAR_1;
   break;
  default:
   FUNC_5("conread: invalid status %d", VAR_6->c_status);
   break;
  }

 FUNC_3(VAR_5);
}
