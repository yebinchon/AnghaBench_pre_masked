
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct tlsv1_server {size_t num_cipher_suites; int * cipher_suites; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

int FUNC_0(struct tlsv1_server *VAR_11, u8 *VAR_12)
{
 size_t VAR_13;
 u16 *VAR_14;


 if (VAR_12[0] == VAR_0) {
  VAR_13 = 0;
  VAR_14 = VAR_11->cipher_suites;
  VAR_14[VAR_13++] = VAR_8;
  VAR_14[VAR_13++] = VAR_7;
  VAR_14[VAR_13++] = VAR_6;
  VAR_14[VAR_13++] = VAR_10;
  VAR_14[VAR_13++] = VAR_9;
  VAR_14[VAR_13++] = VAR_3;
  VAR_14[VAR_13++] = VAR_2;
  VAR_14[VAR_13++] = VAR_1;
  VAR_14[VAR_13++] = VAR_5;
  VAR_14[VAR_13++] = VAR_4;
  VAR_11->num_cipher_suites = VAR_13;
 }

 return 0;
}
