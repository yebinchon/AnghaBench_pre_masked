
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct zip {int ppmd8_stream_failed; int zipx_ppmd_read_compressed; } ;
struct archive_read {TYPE_1__* format; } ;
typedef int ssize_t ;
struct TYPE_4__ {struct archive_read* a; } ;
struct TYPE_3__ {scalar_t__ data; } ;
typedef TYPE_2__ IByteIn ;
typedef int const Byte ;


 int * FUNC_0 (struct archive_read*,int,int*) ;
 int FUNC_1 (struct archive_read*,int) ;

__attribute__((used)) static Byte
FUNC_2(void* VAR_0) {

 struct archive_read *VAR_1 = ((IByteIn*)VAR_0)->a;
 struct zip *VAR_2 = (struct zip*) VAR_1->format->data;
 ssize_t VAR_3 = 0;


 const uint8_t* VAR_4 = FUNC_0(VAR_1, 1, &VAR_3);
 if(VAR_3 < 1) {
  VAR_2->ppmd8_stream_failed = 1;
  return 0;
 }

 FUNC_1(VAR_1, 1);


 ++VAR_2->zipx_ppmd_read_compressed;


 return VAR_4[0];
}
