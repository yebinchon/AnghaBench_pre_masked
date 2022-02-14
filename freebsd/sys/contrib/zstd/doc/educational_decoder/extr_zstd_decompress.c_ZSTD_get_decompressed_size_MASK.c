
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int istream_t ;
struct TYPE_3__ {scalar_t__ frame_content_size; int single_segment_flag; } ;
typedef TYPE_1__ frame_header_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (void const*,size_t const) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (TYPE_1__*,int *) ;

size_t FUNC_4(const void *VAR_0, const size_t VAR_1) {
    istream_t VAR_2 = FUNC_1(VAR_0, VAR_1);


    {
        const u32 VAR_3 = (u32)FUNC_2(&VAR_2, 32);

        if (VAR_3 == 0xFD2FB528U) {

            frame_header_t VAR_4;
            FUNC_3(&VAR_4, &VAR_2);

            if (VAR_4.frame_content_size == 0 && !VAR_4.single_segment_flag) {

                return (size_t)-1;
            }

            return VAR_4.frame_content_size;
        } else {

            FUNC_0("ZSTD frame magic number did not match");
        }
    }
}
