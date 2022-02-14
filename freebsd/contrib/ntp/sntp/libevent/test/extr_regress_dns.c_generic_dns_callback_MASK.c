
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct generic_dns_callback_result {int result; char type; int count; int ttl; size_t addrs_len; int * addrs_buf; int * addrs; } ;


 char VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_2 (int *,void*,size_t) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (void*) ;

__attribute__((used)) static void
FUNC_4(int VAR_6, char VAR_7, int VAR_8, int VAR_9, void *VAR_10,
    void *VAR_11)
{
 size_t VAR_12;
 struct generic_dns_callback_result *VAR_13 = VAR_11;
 VAR_13->result = VAR_6;
 VAR_13->type = VAR_7;
 VAR_13->count = VAR_8;
 VAR_13->ttl = VAR_9;

 if (VAR_7 == VAR_0)
  VAR_12 = VAR_8 * 4;
 else if (VAR_7 == VAR_1)
  VAR_12 = VAR_8 * 16;
 else if (VAR_7 == VAR_2)
  VAR_12 = FUNC_3(VAR_10)+1;
 else {
  VAR_13->addrs_len = VAR_12 = 0;
  VAR_13->addrs = ((void*)0);
 }
 if (VAR_12) {
  VAR_13->addrs_len = VAR_12;
  if (VAR_12 > 256)
   VAR_12 = 256;
  FUNC_2(VAR_13->addrs_buf, VAR_10, VAR_12);
  VAR_13->addrs = VAR_13->addrs_buf;
 }

 --VAR_5;
 if (VAR_5 == 0) {
  if (VAR_4) {
   FUNC_0(VAR_4);
   VAR_4 = ((void*)0);
  } else
   FUNC_1(VAR_3, ((void*)0));
 }
}
