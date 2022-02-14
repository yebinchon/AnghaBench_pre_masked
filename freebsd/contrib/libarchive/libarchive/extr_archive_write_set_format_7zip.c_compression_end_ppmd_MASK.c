
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ppmd_stream {struct ppmd_stream* buff; int ppmd7_context; } ;
struct la_zstream {scalar_t__ valid; int * real_stream; } ;
struct archive {int dummy; } ;
struct TYPE_2__ {int (* Ppmd7_Free ) (int *) ;} ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (struct ppmd_stream*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(struct archive *VAR_2, struct la_zstream *VAR_3)
{
 struct ppmd_stream *VAR_4;

 (void)VAR_2;

 VAR_4 = (struct ppmd_stream *)VAR_3->real_stream;
 VAR_1.Ppmd7_Free(&VAR_4->ppmd7_context);
 FUNC_0(VAR_4->buff);
 FUNC_0(VAR_4);
 VAR_3->real_stream = ((void*)0);
 VAR_3->valid = 0;
 return (VAR_0);
}
