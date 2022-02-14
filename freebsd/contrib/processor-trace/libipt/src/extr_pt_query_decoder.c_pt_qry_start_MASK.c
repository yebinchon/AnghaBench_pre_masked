
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
struct pt_query_decoder {int ip; struct pt_decoder_function* next; int config; int const* pos; int const* sync; } ;
struct pt_decoder_function {int (* decode ) (struct pt_query_decoder*) ;} ;


 struct pt_decoder_function const VAR_0 ;
 int FUNC_0 (struct pt_decoder_function**,int const*,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct pt_query_decoder*) ;
 int FUNC_3 (struct pt_query_decoder*) ;
 int FUNC_4 (struct pt_query_decoder*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (struct pt_query_decoder*) ;

__attribute__((used)) static int FUNC_6(struct pt_query_decoder *VAR_4, const uint8_t *VAR_5,
   uint64_t *VAR_6)
{
 const struct pt_decoder_function *VAR_7;
 int VAR_8, VAR_9;

 if (!VAR_4 || !VAR_5)
  return -VAR_1;

 FUNC_3(VAR_4);

 VAR_4->sync = VAR_5;
 VAR_4->pos = VAR_5;

 VAR_9 = FUNC_0(&VAR_4->next, VAR_5, &VAR_4->config);
 if (VAR_9)
  return VAR_9;

 VAR_7 = VAR_4->next;


 if (VAR_7 != &VAR_0)
  return -VAR_2;


 VAR_9 = VAR_7->decode(VAR_4);
 if (VAR_9 < 0)
  return VAR_9;






 if (VAR_6) {
  VAR_8 = FUNC_1(VAR_6, &VAR_4->ip);


  if (!VAR_8)
   VAR_6 = ((void*)0);
 }


 VAR_9 = FUNC_2(VAR_4);
 if (VAR_9 < 0)
  return VAR_9;


 VAR_8 = FUNC_4(VAR_4);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_9 = FUNC_1(VAR_6, &VAR_4->ip);
 if (VAR_9 < 0) {

  if (VAR_6)
   VAR_8 |= VAR_3;
 }

 return VAR_8;
}
