
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* ptr; size_t capacity; size_t size; } ;
typedef TYPE_1__ buffer_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,...) ;
 size_t VAR_0 ;
 size_t FUNC_2 (void* const,size_t,void const*,size_t const*,unsigned int) ;
 int FUNC_3 (size_t const) ;
 int FUNC_4 (int) ;
 TYPE_1__ FUNC_5 (char const*) ;
 void* FUNC_6 (size_t) ;

__attribute__((used)) static buffer_t
FUNC_7(const char* VAR_1,
                       const void* VAR_2,
                       const size_t* VAR_3, size_t VAR_4,
                       size_t VAR_5)
{
    if (VAR_1) {
        FUNC_1(3, "loading dictionary %s \n", VAR_1);
        return FUNC_5(VAR_1);

    } else {

        FUNC_1(3, "creating dictionary, of target size %u bytes \n",
                        (unsigned)VAR_5);
        void* const VAR_6 = FUNC_6(VAR_5);
        FUNC_0(VAR_6 != ((void*)0));

        FUNC_4(VAR_4 <= VAR_0);
        size_t const VAR_7 = FUNC_2(VAR_6, VAR_5,
                                                      VAR_2,
                                                      VAR_3, (unsigned)VAR_4);
        FUNC_0(!FUNC_3(VAR_7));

        buffer_t VAR_8;
        VAR_8.ptr = VAR_6;
        VAR_8.capacity = VAR_5;
        VAR_8.size = VAR_7;
        return VAR_8;
    }
}
