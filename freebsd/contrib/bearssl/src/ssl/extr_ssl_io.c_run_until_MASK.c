
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int (* low_write ) (int ,unsigned char*,size_t) ;int (* low_read ) (int ,unsigned char*,size_t) ;TYPE_3__* engine; int read_context; int write_context; } ;
typedef TYPE_1__ br_sslio_context ;
struct TYPE_11__ {int shutdown_recv; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_3__*,int) ;
 unsigned char* FUNC_4 (TYPE_3__*,size_t*) ;
 int FUNC_5 (TYPE_3__*,int) ;
 unsigned char* FUNC_6 (TYPE_3__*,size_t*) ;
 int FUNC_7 (int ,unsigned char*,size_t) ;
 int FUNC_8 (int ,unsigned char*,size_t) ;

__attribute__((used)) static int
FUNC_9(br_sslio_context *VAR_5, unsigned VAR_6)
{
 for (;;) {
  unsigned VAR_7;

  VAR_7 = FUNC_0(VAR_5->engine);
  if (VAR_7 & VAR_1) {
   return -1;
  }





  if (VAR_7 & VAR_4) {
   unsigned char *VAR_8;
   size_t VAR_9;
   int VAR_10;

   VAR_8 = FUNC_6(VAR_5->engine, &VAR_9);
   VAR_10 = VAR_5->low_write(VAR_5->write_context, VAR_8, VAR_9);
   if (VAR_10 < 0) {







    if (!VAR_5->engine->shutdown_recv) {
     FUNC_1(
      VAR_5->engine, VAR_0);
    }
    return -1;
   }
   if (VAR_10 > 0) {
    FUNC_5(VAR_5->engine, VAR_10);
   }
   continue;
  }




  if (VAR_7 & VAR_6) {
   return 0;
  }
  if (VAR_7 & VAR_2) {
   return -1;
  }






  if (VAR_7 & VAR_3) {
   unsigned char *VAR_11;
   size_t VAR_12;
   int VAR_13;

   VAR_11 = FUNC_4(VAR_5->engine, &VAR_12);
   VAR_13 = VAR_5->low_read(VAR_5->read_context, VAR_11, VAR_12);
   if (VAR_13 < 0) {
    FUNC_1(VAR_5->engine, VAR_0);
    return -1;
   }
   if (VAR_13 > 0) {
    FUNC_3(VAR_5->engine, VAR_13);
   }
   continue;
  }
  FUNC_2(VAR_5->engine, 0);
 }
}
