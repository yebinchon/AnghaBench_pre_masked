
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int lzma_check ;
struct TYPE_3__ {int coder; int (* get_check ) (int ) ;} ;
struct TYPE_4__ {TYPE_1__ next; } ;
typedef TYPE_2__ lzma_auto_coder ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static lzma_check
FUNC_1(const void *VAR_1)
{
 const lzma_auto_coder *VAR_2 = VAR_1;


 return VAR_2->next.get_check == ((void*)0) ? VAR_0
   : VAR_2->next.get_check(VAR_2->next.coder);
}
