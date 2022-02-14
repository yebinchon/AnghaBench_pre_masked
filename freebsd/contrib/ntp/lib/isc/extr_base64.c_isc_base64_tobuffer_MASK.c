
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {unsigned int length; int * base; } ;
struct TYPE_10__ {TYPE_3__ as_textregion; } ;
struct TYPE_11__ {scalar_t__ type; TYPE_1__ value; } ;
typedef TYPE_2__ isc_token_t ;
typedef TYPE_3__ isc_textregion_t ;
typedef int isc_result_t ;
typedef int isc_lex_t ;
typedef int isc_buffer_t ;
typedef int isc_boolean_t ;
struct TYPE_13__ {scalar_t__ length; int seen_end; } ;
typedef TYPE_4__ base64_decode_ctx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,int,int *) ;
 int FUNC_4 (int *,TYPE_2__*,scalar_t__,int ) ;
 int FUNC_5 (int *,TYPE_2__*) ;
 scalar_t__ VAR_3 ;

isc_result_t
FUNC_6(isc_lex_t *VAR_4, isc_buffer_t *VAR_5, int VAR_6) {
 base64_decode_ctx_t VAR_7;
 isc_textregion_t *VAR_8;
 isc_token_t VAR_9;
 isc_boolean_t VAR_10;

 FUNC_3(&VAR_7, VAR_6, VAR_5);

 while (!VAR_7.seen_end && (VAR_7.length != 0)) {
  unsigned int VAR_11;

  if (VAR_6 > 0)
   VAR_10 = VAR_0;
  else
   VAR_10 = VAR_2;
  FUNC_0(FUNC_4(VAR_4, &VAR_9,
           VAR_3, VAR_10));
  if (VAR_9.type != VAR_3)
   break;
  VAR_8 = &VAR_9.value.as_textregion;
  for (VAR_11 = 0; VAR_11 < VAR_8->length; VAR_11++)
   FUNC_0(FUNC_1(&VAR_7, VAR_8->base[VAR_11]));
 }
 if (VAR_7.length < 0 && !VAR_7.seen_end)
  FUNC_5(VAR_4, &VAR_9);
 FUNC_0(FUNC_2(&VAR_7));
 return (VAR_1);
}
