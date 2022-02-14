
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct archive_read {int archive; } ;
struct _7zip {scalar_t__ ppmd7_valid; int ppmd7_context; scalar_t__ stream_valid; int stream; scalar_t__ bzstream_valid; int bzstream; int lzstream; scalar_t__ lzstream_valid; } ;
struct TYPE_2__ {int (* Ppmd7_Free ) (int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_1 (int *,int ,char*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(struct archive_read *VAR_6, struct _7zip *VAR_7)
{
 int VAR_8 = VAR_2;



 (void)VAR_6;
 if (VAR_7->ppmd7_valid) {
  VAR_5.Ppmd7_Free(
   &VAR_7->ppmd7_context);
  VAR_7->ppmd7_valid = 0;
 }
 return (VAR_8);
}
