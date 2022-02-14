
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char mode; scalar_t__ buffLive; scalar_t__ buffer; int * handle; } ;
typedef int FILE ;
typedef TYPE_1__ BitStream ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static BitStream* FUNC_2 ( FILE* VAR_0 )
{
   BitStream *VAR_1 = FUNC_0 ( sizeof(BitStream) );
   if (VAR_1 == ((void*)0)) FUNC_1 ( sizeof(BitStream) );
   VAR_1->handle = VAR_0;
   VAR_1->buffer = 0;
   VAR_1->buffLive = 0;
   VAR_1->mode = 'w';
   return VAR_1;
}
