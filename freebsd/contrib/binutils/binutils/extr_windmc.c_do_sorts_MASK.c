
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {struct TYPE_12__* next; } ;
typedef TYPE_1__ mc_node_lang ;
struct TYPE_13__ {struct TYPE_13__* next; TYPE_1__* sub; } ;
typedef TYPE_2__ mc_node ;
typedef TYPE_1__ mc_keyword ;


 TYPE_1__* FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int) ;
 TYPE_1__** VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 TYPE_1__** VAR_3 ;
 int VAR_4 ;
 TYPE_1__** VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_1__**,size_t,int,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__** FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4 (void)
{
  mc_node *VAR_9;
  mc_node_lang *VAR_10;
  const mc_keyword *VAR_11;
  int VAR_12;


  VAR_4 = 0;

  VAR_9 = VAR_2;
  while (VAR_9 != ((void*)0))
    {
      VAR_10 = VAR_9->sub;
      while (VAR_10 != ((void*)0))
 {
   VAR_4 +=1;
   VAR_10 = VAR_10->next;
 }
      VAR_9 = VAR_9->next;
    }

  if (VAR_4 != 0)
    {
      VAR_9 = VAR_2;
      VAR_12 = 0;
      VAR_3 = FUNC_3 (sizeof (mc_node_lang *) * VAR_4);

      while (VAR_9 != ((void*)0))
 {
   VAR_10 = VAR_9->sub;
   while (VAR_10 != ((void*)0))
     {
       VAR_3[VAR_12++] = VAR_10;
       VAR_10 = VAR_10->next;
     }
   VAR_9 = VAR_9->next;
 }
      FUNC_2 (VAR_3, (size_t) VAR_4, sizeof (mc_node_lang *), VAR_8);
    }

  VAR_12 = 0;
  while ((VAR_11 = FUNC_0 (VAR_12)) != ((void*)0))
    ++VAR_12;
  VAR_1 = VAR_12;
  if (VAR_12 != 0)
    {
      VAR_0 = FUNC_3 (sizeof (mc_keyword *) * VAR_12);
      VAR_12 = 0;
      while ((VAR_11 = FUNC_0 (VAR_12)) != ((void*)0))
 VAR_0[VAR_12++] = (mc_keyword *) VAR_11;
      FUNC_2 (VAR_0, (size_t) VAR_1, sizeof (mc_keyword *), VAR_7);
    }


  VAR_12 = 0;
  while ((VAR_11 = FUNC_1 (VAR_12)) != ((void*)0))
    ++VAR_12;
  VAR_6 = VAR_12;
  if (VAR_12 != 0)
    {
      VAR_5 = FUNC_3 (sizeof (mc_keyword *) * VAR_12);
      VAR_12 = 0;
      while ((VAR_11 = FUNC_1 (VAR_12)) != ((void*)0))
 VAR_5[VAR_12++] = (mc_keyword *) VAR_11;
      FUNC_2 (VAR_5, (size_t) VAR_6, sizeof (mc_keyword *), VAR_7);
    }
}
