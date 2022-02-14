
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int wind_profile_flags ;
typedef int uint32_t ;
typedef int name ;
struct TYPE_7__ {int utf8String; } ;
struct TYPE_8__ {int element; TYPE_1__ u; } ;
typedef TYPE_2__ DirectoryString ;


 int FUNC_0 (TYPE_2__ const*,int ,size_t,int *) ;
 int FUNC_1 (TYPE_2__ const*,int ,size_t,int *) ;
 int FUNC_2 (TYPE_2__ const*,int ,size_t,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char*,int) ;
 int VAR_5 ;






 int FUNC_4 (int *) ;
 int VAR_6 ;
 int * FUNC_5 (size_t) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (int *,size_t,int *,size_t*,int ) ;
 int FUNC_7 (int ,int *,size_t*) ;
 int FUNC_8 (int ,size_t*) ;

__attribute__((used)) static int
FUNC_9(const DirectoryString *VAR_10, uint32_t **VAR_11, size_t *VAR_12)
{
    wind_profile_flags VAR_13;
    size_t VAR_14, VAR_15;
    int VAR_16;
    uint32_t *VAR_17;

    *VAR_11 = ((void*)0);
    *VAR_12 = 0;

    switch(VAR_10->element) {
    case 132:
 VAR_13 = VAR_2;
 FUNC_2(VAR_10, VAR_6, VAR_15, VAR_17);
 break;
    case 131:
 VAR_13 = VAR_2;
 VAR_13 |= VAR_4;
 FUNC_2(VAR_10, VAR_7, VAR_15, VAR_17);
 break;
    case 130:
 VAR_13 = VAR_3;
 FUNC_0(VAR_10, VAR_8, VAR_15, VAR_17);
 break;
    case 133:
 VAR_13 = VAR_2;
 FUNC_1(VAR_10, VAR_5, VAR_15, VAR_17);
 break;
    case 129:
 VAR_13 = VAR_2;
 FUNC_1(VAR_10, VAR_9, VAR_15, VAR_17);
 break;
    case 128:
 VAR_13 = VAR_2;
 VAR_16 = FUNC_8(VAR_10->u.utf8String, &VAR_15);
 if (VAR_16)
     return VAR_16;
 VAR_17 = FUNC_5(VAR_15 * sizeof(VAR_17[0]));
 if (VAR_17 == ((void*)0))
     return VAR_0;
 VAR_16 = FUNC_7(VAR_10->u.utf8String, VAR_17, &VAR_15);
 if (VAR_16) {
     FUNC_4(VAR_17);
     return VAR_16;
 }
 break;
    default:
 FUNC_3("unknown directory type: %d", VAR_10->element);
    }

    *VAR_12 = VAR_15;

    for (VAR_14 = 0; VAR_14 < 4; VAR_14++) {
 *VAR_12 = *VAR_12 * 2;
 *VAR_11 = FUNC_5(*VAR_12 * sizeof((*VAR_11)[0]));

 VAR_16 = FUNC_6(VAR_17, VAR_15, *VAR_11, VAR_12, VAR_13);
 if (VAR_16 == VAR_1) {
     FUNC_4(*VAR_11);
     *VAR_11 = ((void*)0);
     continue;
 } else
     break;
    }
    FUNC_4(VAR_17);
    if (VAR_16) {
 if (*VAR_11)
     FUNC_4(*VAR_11);
 *VAR_11 = ((void*)0);
 *VAR_12 = 0;
 return VAR_16;
    }

    return 0;
}
