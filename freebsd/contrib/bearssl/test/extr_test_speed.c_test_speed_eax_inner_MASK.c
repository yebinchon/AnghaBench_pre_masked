
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ clock_t ;
typedef int br_eax_context ;
struct TYPE_4__ {int (* init ) (int *,unsigned char*,size_t) ;} ;
typedef TYPE_1__ br_block_ctrcbc_class ;
struct TYPE_5__ {int vtable; } ;
typedef TYPE_2__ br_aes_gen_ctrcbc_keys ;


 double VAR_0 ;
 int FUNC_0 (int *,unsigned char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned char*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,unsigned char*,int) ;
 int FUNC_5 (int *,int,unsigned char*,int) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (unsigned char*,char,int) ;
 int FUNC_9 (char*,char*,...) ;
 int VAR_1 ;
 int FUNC_10 (int *,unsigned char*,size_t) ;
 int FUNC_11 (int *,unsigned char*,size_t) ;

__attribute__((used)) static void
FUNC_12(char *VAR_2,
 const br_block_ctrcbc_class *VAR_3, size_t VAR_4)
{
 unsigned char VAR_5[8192], VAR_6[32], VAR_7[16], VAR_8[16], VAR_9[16];
 int VAR_10;
 long VAR_11;
 br_aes_gen_ctrcbc_keys VAR_12;
 br_eax_context VAR_13;

 if (VAR_3 == ((void*)0)) {
  FUNC_9("%-30s UNAVAILABLE\n", VAR_2);
  FUNC_7(VAR_1);
  return;
 }
 FUNC_8(VAR_6, 'K', VAR_4);
 FUNC_8(VAR_7, 'N', sizeof VAR_7);
 FUNC_8(VAR_8, 'A', sizeof VAR_8);
 FUNC_8(VAR_5, 'T', sizeof VAR_5);
 for (VAR_10 = 0; VAR_10 < 10; VAR_10 ++) {
  VAR_3->init(&VAR_12.vtable, VAR_6, VAR_4);
  FUNC_3(&VAR_13, &VAR_12.vtable);
  FUNC_4(&VAR_13, VAR_7, sizeof VAR_7);
  FUNC_0(&VAR_13, VAR_8, sizeof VAR_8);
  FUNC_1(&VAR_13);
  FUNC_5(&VAR_13, 1, VAR_5, sizeof VAR_5);
  FUNC_2(&VAR_13, VAR_9);
 }
 VAR_11 = 10;
 for (;;) {
  clock_t VAR_14, VAR_15;
  double VAR_16;
  long VAR_17;

  VAR_14 = FUNC_6();
  for (VAR_17 = VAR_11; VAR_17 > 0; VAR_17 --) {
   VAR_3->init(&VAR_12.vtable, VAR_6, VAR_4);
   FUNC_3(&VAR_13, &VAR_12.vtable);
   FUNC_4(&VAR_13, VAR_7, sizeof VAR_7);
   FUNC_0(&VAR_13, VAR_8, sizeof VAR_8);
   FUNC_1(&VAR_13);
   FUNC_5(&VAR_13, 1, VAR_5, sizeof VAR_5);
   FUNC_2(&VAR_13, VAR_9);
  }
  VAR_15 = FUNC_6();
  VAR_16 = (double)(VAR_15 - VAR_14) / VAR_0;
  if (VAR_16 >= 2.0) {
   FUNC_9("%-30s %8.2f MB/s\n", VAR_2,
    ((double)sizeof VAR_5) * (double)VAR_11
    / (VAR_16 * 1000000.0));
   FUNC_7(VAR_1);
   return;
  }
  VAR_11 <<= 1;
 }
}
