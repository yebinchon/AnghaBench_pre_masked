
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int time_t ;
struct timespec {unsigned int tv_sec; } ;
struct key {unsigned int expiry; int sem; } ;
typedef int key_serial_t ;
typedef struct key* key_ref_t ;


 long VAR_0 ;
 scalar_t__ FUNC_0 (struct key*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 long FUNC_1 (struct key*) ;
 struct timespec FUNC_2 () ;
 int FUNC_3 (int *) ;
 unsigned int VAR_4 ;
 struct key* FUNC_4 (int ) ;
 int FUNC_5 (struct key*) ;
 struct key* FUNC_6 (struct key*) ;
 int FUNC_7 (unsigned int) ;
 struct key* FUNC_8 (int ,int,int ) ;
 int FUNC_9 (int *) ;

long FUNC_10(key_serial_t VAR_5, unsigned VAR_6)
{
 struct timespec VAR_7;
 struct key *VAR_8, *VAR_9;
 key_ref_t VAR_10;
 time_t VAR_11;
 long VAR_12;

 VAR_10 = FUNC_8(VAR_5, VAR_1 | VAR_2,
      VAR_3);
 if (FUNC_0(VAR_10)) {


  if (FUNC_1(VAR_10) == -VAR_0) {
   VAR_9 = FUNC_4(VAR_5);
   if (!FUNC_0(VAR_9)) {
    FUNC_5(VAR_9);
    VAR_10 = FUNC_8(VAR_5,
         VAR_2,
         0);
    if (!FUNC_0(VAR_10))
     goto okay;
   }
  }

  VAR_12 = FUNC_1(VAR_10);
  goto error;
 }

okay:
 VAR_8 = FUNC_6(VAR_10);


 FUNC_3(&VAR_8->sem);

 VAR_11 = 0;
 if (VAR_6 > 0) {
  VAR_7 = FUNC_2();
  VAR_11 = VAR_7.tv_sec + VAR_6;
 }

 VAR_8->expiry = VAR_11;
 FUNC_7(VAR_8->expiry + VAR_4);

 FUNC_9(&VAR_8->sem);
 FUNC_5(VAR_8);

 VAR_12 = 0;
error:
 return VAR_12;
}
