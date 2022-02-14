
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int frame_t ;
typedef int dictInfo ;
typedef scalar_t__ U32 ;


 int FUNC_0 (char*,unsigned int,int ) ;
 int FUNC_1 (size_t const) ;
 scalar_t__ FUNC_2 (size_t const) ;
 scalar_t__ FUNC_3 (scalar_t__,int *,int const) ;
 int VAR_0 ;
 int FUNC_4 (int ,int ,int *,int ) ;
 size_t FUNC_5 (int *) ;
 size_t FUNC_6 (int *) ;
 size_t FUNC_7 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_8(U32* VAR_1)
{
    frame_t VAR_2;
    U32 const VAR_3 = *VAR_1;
    { dictInfo const VAR_4 = FUNC_4(0, 0, ((void*)0), 0);
        *VAR_1 = FUNC_3(*VAR_1, &VAR_2, VAR_4);
    }

    { size_t const VAR_5 = FUNC_5(&VAR_2);
        if (FUNC_2(VAR_5)) {
            FUNC_0("Error in simple mode on test seed %u: %s\n",
                    (unsigned)VAR_3, FUNC_1(VAR_5));
            return 1;
        }
    }
    { size_t const VAR_6 = FUNC_6(&VAR_2);
        if (FUNC_2(VAR_6)) {
            FUNC_0("Error in streaming mode on test seed %u: %s\n",
                    (unsigned)VAR_3, FUNC_1(VAR_6));
            return 1;
        }
    }
    { size_t const VAR_7 = FUNC_7(*VAR_1, VAR_0);
        if (FUNC_2(VAR_7)) {
            FUNC_0("Error in dictionary mode on test seed %u: %s\n",
                    (unsigned)VAR_3, FUNC_1(VAR_7));
            return 1;
        }
    }
    return 0;
}
