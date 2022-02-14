
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int irq_count; int irqs_unhandled; int last_unhandled; } ;
typedef int off_t ;


 struct irq_desc* FUNC_0 (long) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,int,int,int) ;

__attribute__((used)) static int FUNC_3(char *VAR_0, char **VAR_1, off_t VAR_2,
      int VAR_3, int *VAR_4, void *VAR_5)
{
 struct irq_desc *VAR_6 = FUNC_0((long) VAR_5);
 return FUNC_2(VAR_0, "count %u\n"
        "unhandled %u\n"
        "last_unhandled %u ms\n",
   VAR_6->irq_count,
   VAR_6->irqs_unhandled,
   FUNC_1(VAR_6->last_unhandled));
}
