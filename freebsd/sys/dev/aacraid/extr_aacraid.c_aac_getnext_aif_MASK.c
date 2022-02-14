
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct get_adapter_fib_ioctl32 {scalar_t__ AdapterFibContext; scalar_t__ AifFib; scalar_t__ Wait; } ;
struct get_adapter_fib_ioctl {scalar_t__ AdapterFibContext; scalar_t__ AifFib; scalar_t__ Wait; } ;
struct aac_softc {int aac_io_lock; int aac_state; int aac_aifq; struct aac_fib_context* fibctx; } ;
struct aac_fib_context {scalar_t__ unique; struct aac_fib_context* next; } ;
typedef scalar_t__ caddr_t ;
typedef int agf32 ;
typedef int agf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_7 ;
 int FUNC_1 (struct aac_softc*,struct aac_fib_context*,scalar_t__) ;
 int FUNC_2 (scalar_t__,struct get_adapter_fib_ioctl32*,int) ;
 int FUNC_3 (struct aac_softc*,char*,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int,char*,int ) ;

__attribute__((used)) static int
FUNC_7(struct aac_softc *VAR_8, caddr_t VAR_9)
{
 struct get_adapter_fib_ioctl VAR_10;
 struct aac_fib_context *VAR_11;
 int VAR_12;

 FUNC_3(VAR_8, VAR_4, "");

 FUNC_4(&VAR_8->aac_io_lock);
  VAR_12 = FUNC_2(VAR_9, &VAR_10, sizeof(VAR_10));
 if (VAR_12 == 0) {
  for (VAR_11 = VAR_8->fibctx; VAR_11; VAR_11 = VAR_11->next) {
   if (VAR_10.AdapterFibContext == VAR_11->unique)
    break;
  }
  if (!VAR_11) {
   FUNC_5(&VAR_8->aac_io_lock);
   return (VAR_2);
  }

  VAR_12 = FUNC_1(VAR_8, VAR_11, VAR_10.AifFib);
  if (VAR_12 == VAR_1 && VAR_10.Wait) {
   FUNC_3(VAR_8, VAR_3, "aac_getnext_aif(): waiting for AIF");
   VAR_8->aac_state |= VAR_0;
   while (VAR_12 == VAR_1) {
    FUNC_5(&VAR_8->aac_io_lock);
    VAR_12 = FUNC_6(VAR_8->aac_aifq, VAR_6 |
            VAR_5, "aacaif", 0);
    FUNC_4(&VAR_8->aac_io_lock);
    if (VAR_12 == 0)
     VAR_12 = FUNC_1(VAR_8, VAR_11, VAR_10.AifFib);
   }
   VAR_8->aac_state &= ~VAR_0;
  }
 }
 FUNC_5(&VAR_8->aac_io_lock);
 return(VAR_12);
}
