
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t avail_in; size_t avail_out; size_t const total_in; size_t const total_out; int * next_out; int * next_in; int * opaque; int zfree; int zalloc; } ;
typedef TYPE_1__ z_stream ;
typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (char*,size_t const,size_t const,size_t const) ;

size_t
FUNC_5(uint8_t *VAR_6, uint8_t *VAR_7, const size_t VAR_8)
{
 z_stream VAR_9;
 int VAR_10;

 if (VAR_8 == 0)
  return (0);

 VAR_9.zalloc = VAR_4;
 VAR_9.zfree = VAR_5;
 VAR_9.opaque = ((void*)0);

 VAR_10 = FUNC_3(&VAR_9, VAR_0);
 FUNC_0(VAR_10, "deflateInit");

 VAR_9.next_in = VAR_6;
 VAR_9.next_out = VAR_7;
 VAR_9.avail_in = VAR_8;
 VAR_9.avail_out = VAR_8*2u +512u;

 while (VAR_9.total_in != VAR_8 && VAR_9.total_out < (VAR_8*2u + 512u)) {
  VAR_10 = FUNC_1(&VAR_9, VAR_2);



  FUNC_0(VAR_10, "deflate(..., Z_NO_FLUSH)");
 }

 for (;;) {
  VAR_10 = FUNC_1(&VAR_9, VAR_1);



  if (VAR_10 == VAR_3) break;
  FUNC_0(VAR_10, "deflate(..., Z_STREAM_END)");
 }

 VAR_10 = FUNC_2(&VAR_9);
 FUNC_0(VAR_10, "deflateEnd");

 return ((size_t)VAR_9.total_out);
}
