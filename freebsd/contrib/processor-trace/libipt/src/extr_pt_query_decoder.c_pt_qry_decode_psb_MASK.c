
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const uint8_t ;
struct pt_query_decoder {int * next; int evq; int const* pos; int config; int tcal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int const*,int *) ;
 int FUNC_2 (struct pt_query_decoder*) ;
 int FUNC_3 (int *,int *) ;
 int VAR_2 ;

int FUNC_4(struct pt_query_decoder *VAR_3)
{
 const uint8_t *VAR_4;
 int VAR_5, VAR_6;

 if (!VAR_3)
  return -VAR_2;

 VAR_4 = VAR_3->pos;

 VAR_5 = FUNC_1(VAR_4, &VAR_3->config);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_6 = FUNC_3(&VAR_3->tcal, &VAR_3->config);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_3->pos += VAR_5;

 VAR_6 = FUNC_2(VAR_3);
 if (VAR_6 < 0) {



  VAR_3->pos = VAR_4;


  (void) FUNC_0(&VAR_3->evq, VAR_0);


  VAR_3->next = &VAR_1;

  return VAR_6;
 }






 return 0;
}
