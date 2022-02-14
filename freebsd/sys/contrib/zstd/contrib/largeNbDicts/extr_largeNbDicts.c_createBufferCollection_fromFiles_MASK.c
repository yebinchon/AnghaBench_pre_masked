
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void** slicePtrs; size_t* capacities; unsigned int nbSlices; } ;
typedef TYPE_1__ slice_collection_t ;
struct TYPE_6__ {void* ptr; size_t capacity; size_t size; } ;
typedef TYPE_2__ buffer_t ;
struct TYPE_7__ {TYPE_1__ slices; TYPE_2__ buffer; } ;
typedef TYPE_3__ buffer_collection_t ;
typedef scalar_t__ U64 ;


 scalar_t__ const VAR_0 ;
 scalar_t__ const VAR_1 ;
 scalar_t__ FUNC_0 (char const* const*,unsigned int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (unsigned int,int) ;
 int FUNC_3 (void* const,size_t const,size_t* const,char const* const*,unsigned int) ;
 void* FUNC_4 (size_t const) ;

__attribute__((used)) static buffer_collection_t
FUNC_5(const char* const * VAR_2, unsigned VAR_3)
{
    U64 const VAR_4 = FUNC_0(VAR_2, VAR_3);
    FUNC_1(VAR_4 != VAR_1);
    FUNC_1(VAR_4 <= VAR_0);
    size_t const VAR_5 = (size_t)VAR_4;
    FUNC_1(VAR_5 > 0);
    void* const VAR_6 = FUNC_4(VAR_5);
    FUNC_1(VAR_6 != ((void*)0));

    FUNC_1(VAR_3 > 0);
    size_t* const VAR_7 = (size_t*)FUNC_2(VAR_3, sizeof(*VAR_7));
    FUNC_1(VAR_7 != ((void*)0));


    int const VAR_8 = FUNC_3(VAR_6, VAR_5,
                                    VAR_7,
                                    VAR_2, VAR_3);
    FUNC_1(VAR_8 == 0);

    void** VAR_9 = (void**)FUNC_4(VAR_3 * sizeof(*VAR_9));
    FUNC_1(VAR_9 != ((void*)0));

    char* const VAR_10 = (char*)VAR_6;
    size_t VAR_11 = 0;
    unsigned VAR_12 = 0;
    for ( ; (VAR_11 < VAR_5) && (VAR_12 < VAR_3); VAR_12++) {
        VAR_9[VAR_12] = VAR_10 + VAR_11;
        VAR_11 += VAR_7[VAR_12];
    }
    FUNC_1(VAR_11 == VAR_5);
    FUNC_1(VAR_12 == VAR_3);


    buffer_t VAR_13;
    VAR_13.ptr = VAR_6;
    VAR_13.capacity = VAR_5;
    VAR_13.size = VAR_5;

    slice_collection_t VAR_14;
    VAR_14.slicePtrs = VAR_9;
    VAR_14.capacities = VAR_7;
    VAR_14.nbSlices = VAR_3;

    buffer_collection_t VAR_15;
    VAR_15.buffer = VAR_13;
    VAR_15.slices = VAR_14;
    return VAR_15;
}
