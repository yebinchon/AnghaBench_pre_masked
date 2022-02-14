
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_query_decoder {int evq; struct pt_decoder_function* next; } ;
struct pt_decoder_function {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_1(const struct pt_query_decoder *VAR_8)
{
 const struct pt_decoder_function *VAR_9;

 if (!VAR_8)
  return -VAR_7;

 VAR_9 = VAR_8->next;
 if (!VAR_9)
  return 0;

 if (VAR_9->flags & VAR_3)
  return 1;

 if (VAR_9->flags & VAR_5)
  return FUNC_0(&VAR_8->evq, VAR_1);

 if (VAR_9->flags & VAR_6)
  return FUNC_0(&VAR_8->evq, VAR_2);

 if (VAR_9->flags & VAR_4)
  return FUNC_0(&VAR_8->evq, VAR_0);

 return 0;
}
