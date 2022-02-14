
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct tlsv1_client {scalar_t__ state; struct wpabuf* partial_input; int alert_description; scalar_t__ alert_level; int rl; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (size_t) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (struct tlsv1_client*,int ,int ) ;
 int * FUNC_4 (struct tlsv1_client*,size_t*) ;
 int * FUNC_5 (struct tlsv1_client*,size_t*,int) ;
 scalar_t__ FUNC_6 (struct tlsv1_client*,int ,int *,size_t*,int **,size_t*) ;
 int * FUNC_7 (struct tlsv1_client*,scalar_t__,int ,size_t*) ;
 int FUNC_8 (int *,int const*,int,int *,size_t*,int *) ;
 int FUNC_9 (int ,char*) ;
 struct wpabuf* FUNC_10 (int const*,int) ;
 int FUNC_11 (struct wpabuf*) ;
 int * FUNC_12 (struct wpabuf*) ;
 size_t FUNC_13 (struct wpabuf*) ;
 int FUNC_14 (struct wpabuf*,int const*,size_t) ;
 scalar_t__ FUNC_15 (struct wpabuf**,size_t) ;

u8 * FUNC_16(struct tlsv1_client *VAR_5,
       const u8 *VAR_6, size_t VAR_7,
       size_t *VAR_8, u8 **VAR_9,
       size_t *VAR_10, int *VAR_11)
{
 const u8 *VAR_12, *VAR_13;
 u8 *VAR_14 = ((void*)0), *VAR_15 = ((void*)0), *VAR_16, *VAR_17, VAR_18, VAR_19;
 size_t VAR_20;
 int VAR_21;
 int VAR_22;

 if (VAR_11)
  *VAR_11 = 0;

 if (VAR_5->state == VAR_0) {
  if (VAR_7)
   return ((void*)0);
  return FUNC_4(VAR_5, VAR_8);
 }

 if (VAR_5->partial_input) {
  if (FUNC_15(&VAR_5->partial_input, VAR_7) < 0) {
   FUNC_9(VAR_2, "TLSv1: Failed to allocate "
       "memory for pending record");
   FUNC_3(VAR_5, VAR_4,
      VAR_3);
   goto failed;
  }
  FUNC_14(VAR_5->partial_input, VAR_6, VAR_7);
  VAR_6 = FUNC_12(VAR_5->partial_input);
  VAR_7 = FUNC_13(VAR_5->partial_input);
 }

 if (VAR_6 == ((void*)0) || VAR_7 == 0)
  return ((void*)0);

 VAR_12 = VAR_6;
 VAR_13 = VAR_6 + VAR_7;
 VAR_15 = FUNC_1(VAR_7);
 if (VAR_15 == ((void*)0))
  return ((void*)0);


 while (VAR_12 < VAR_13) {
  VAR_20 = VAR_7;
  VAR_22 = FUNC_8(&VAR_5->rl, VAR_12, VAR_13 - VAR_12,
         VAR_15, &VAR_20, &VAR_18);
  if (VAR_22 < 0) {
   FUNC_9(VAR_2, "TLSv1: Processing received "
       "record failed");
   FUNC_3(VAR_5, VAR_4, VAR_18);
   goto failed;
  }
  if (VAR_22 == 0) {
   struct wpabuf *VAR_23;
   FUNC_9(VAR_2, "TLSv1: Need more data");
   VAR_23 = FUNC_10(VAR_12, VAR_13 - VAR_12);
   FUNC_11(VAR_5->partial_input);
   VAR_5->partial_input = VAR_23;
   if (VAR_5->partial_input == ((void*)0)) {
    FUNC_9(VAR_2, "TLSv1: Failed to "
        "allocate memory for pending "
        "record");
    FUNC_3(VAR_5, VAR_4,
       VAR_3);
    goto failed;
   }
   FUNC_0(VAR_15);
   if (VAR_11)
    *VAR_11 = 1;
   return ((void*)0);
  }
  VAR_19 = VAR_12[0];

  VAR_16 = VAR_15;
  VAR_17 = VAR_15 + VAR_20;



  while (VAR_16 < VAR_17) {
   VAR_20 = VAR_17 - VAR_16;
   if (FUNC_6(VAR_5, VAR_19, VAR_16,
          &VAR_20,
          VAR_9,
          VAR_10) < 0)
    goto failed;
   VAR_16 += VAR_20;
  }

  VAR_12 += VAR_22;
 }

 FUNC_0(VAR_15);
 VAR_15 = ((void*)0);

 VAR_21 = VAR_9 == ((void*)0) || *VAR_9 == ((void*)0);
 VAR_14 = FUNC_5(VAR_5, VAR_8, VAR_21);

failed:
 FUNC_0(VAR_15);
 if (VAR_5->alert_level) {
  FUNC_11(VAR_5->partial_input);
  VAR_5->partial_input = ((void*)0);
  VAR_5->state = VAR_1;
  FUNC_0(VAR_14);
  VAR_14 = FUNC_7(VAR_5, VAR_5->alert_level,
           VAR_5->alert_description,
           VAR_8);
 } else if (VAR_14 == ((void*)0)) {
  VAR_14 = FUNC_2(1);
  *VAR_8 = 0;
 }

 if (VAR_11 == ((void*)0) || !(*VAR_11)) {
  FUNC_11(VAR_5->partial_input);
  VAR_5->partial_input = ((void*)0);
 }

 return VAR_14;
}
