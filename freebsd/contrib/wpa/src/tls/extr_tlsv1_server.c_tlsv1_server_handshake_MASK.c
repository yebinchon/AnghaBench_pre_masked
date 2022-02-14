
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tlsv1_server {scalar_t__ state; int write_alerts; int alert_description; scalar_t__ alert_level; int rl; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (size_t) ;
 int FUNC_2 (int *,int const*,int,int *,size_t*,int *) ;
 int FUNC_3 (struct tlsv1_server*,int ,int ) ;
 int * FUNC_4 (struct tlsv1_server*,size_t*) ;
 scalar_t__ FUNC_5 (struct tlsv1_server*,int ,int *,size_t*) ;
 int * FUNC_6 (struct tlsv1_server*,scalar_t__,int ,size_t*) ;
 int FUNC_7 (int ,char*) ;

u8 * FUNC_8(struct tlsv1_server *VAR_4,
       const u8 *VAR_5, size_t VAR_6,
       size_t *VAR_7)
{
 const u8 *VAR_8, *VAR_9;
 u8 *VAR_10 = ((void*)0), *VAR_11, *VAR_12, *VAR_13, VAR_14, VAR_15;
 size_t VAR_16;
 int VAR_17;

 if (VAR_5 == ((void*)0) || VAR_6 == 0) {
  FUNC_7(VAR_1, "TLSv1: No input data to server");
  return ((void*)0);
 }

 VAR_8 = VAR_5;
 VAR_9 = VAR_5 + VAR_6;
 VAR_11 = FUNC_1(VAR_6);
 if (VAR_11 == ((void*)0))
  return ((void*)0);


 while (VAR_8 < VAR_9) {
  VAR_16 = VAR_6;
  VAR_17 = FUNC_2(&VAR_4->rl, VAR_8, VAR_9 - VAR_8,
         VAR_11, &VAR_16, &VAR_14);
  if (VAR_17 < 0) {
   FUNC_7(VAR_1, "TLSv1: Processing received "
       "record failed");
   FUNC_3(VAR_4, VAR_3, VAR_14);
   goto failed;
  }
  if (VAR_17 == 0) {

   FUNC_7(VAR_1, "TLSv1: Partial processing not "
       "yet supported");
   FUNC_3(VAR_4, VAR_3,
        VAR_2);
   goto failed;
  }
  VAR_15 = VAR_8[0];

  VAR_12 = VAR_11;
  VAR_13 = VAR_11 + VAR_16;



  while (VAR_12 < VAR_13) {
   VAR_16 = VAR_13 - VAR_12;
   if (FUNC_5(VAR_4, VAR_15, VAR_12,
          &VAR_16) < 0)
    goto failed;
   VAR_12 += VAR_16;
  }

  VAR_8 += VAR_17;
 }

 FUNC_0(VAR_11);
 VAR_11 = ((void*)0);

 VAR_10 = FUNC_4(VAR_4, VAR_7);

failed:
 FUNC_0(VAR_11);
 if (VAR_4->alert_level) {
  if (VAR_4->state == VAR_0) {

   FUNC_7(VAR_1, "TLSv1: Drop alert loop");
   FUNC_0(VAR_10);
   return ((void*)0);
  }
  VAR_4->state = VAR_0;
  FUNC_0(VAR_10);
  VAR_10 = FUNC_6(VAR_4, VAR_4->alert_level,
           VAR_4->alert_description,
           VAR_7);
  VAR_4->write_alerts++;
 }

 return VAR_10;
}
