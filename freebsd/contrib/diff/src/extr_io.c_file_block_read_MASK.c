
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_data {int eof; scalar_t__ buffered; int name; int desc; } ;


 scalar_t__ FUNC_0 (struct file_data*) ;
 size_t VAR_0 ;
 size_t FUNC_1 (int ,scalar_t__,size_t) ;
 int FUNC_2 (int ) ;

void
FUNC_3 (struct file_data *VAR_1, size_t VAR_2)
{
  if (VAR_2 && ! VAR_1->eof)
    {
      size_t VAR_3 = FUNC_1 (VAR_1->desc,
        FUNC_0 (VAR_1) + VAR_1->buffered, VAR_2);
      if (VAR_3 == VAR_0)
 FUNC_2 (VAR_1->name);
      VAR_1->buffered += VAR_3;
      VAR_1->eof = VAR_3 < VAR_2;
    }
}
