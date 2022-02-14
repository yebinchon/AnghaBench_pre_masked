
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcpu_chunk {scalar_t__ data; } ;


 int FUNC_0 (struct pcpu_chunk*) ;
 int FUNC_1 (scalar_t__,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct pcpu_chunk *VAR_1)
{
 if (VAR_1 && VAR_1->data)
  FUNC_1(VAR_1->data, VAR_0);
 FUNC_0(VAR_1);
}
