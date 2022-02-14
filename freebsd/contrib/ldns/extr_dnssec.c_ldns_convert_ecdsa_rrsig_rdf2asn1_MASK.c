
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ldns_status ;
typedef int ldns_rdf ;
typedef int ldns_buffer ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int*,long) ;
 int FUNC_3 (int *,long) ;
 int* FUNC_4 (int const*) ;
 size_t FUNC_5 (int const*) ;

ldns_status
FUNC_6(ldns_buffer *VAR_1,
        const ldns_rdf *VAR_2)
{







        uint8_t VAR_3[] = {0x30, 0x44, 0x02, 0x20};
        int VAR_4 = 4;
        uint8_t VAR_5[] = {0x02, 0x20};
        int VAR_6 = 2;
        int VAR_7, VAR_8, VAR_9, VAR_10=0, VAR_11=0;
        long VAR_12 = (long)FUNC_5(VAR_2) / 2;
        uint8_t* VAR_13 = FUNC_4(VAR_2);

        if(VAR_12 < 16 || (size_t)VAR_12*2 != FUNC_5(VAR_2))
                return VAR_0;

        while(VAR_10 < VAR_12-1 && VAR_13[VAR_10] == 0)
                VAR_10++;

        while(VAR_11 < VAR_12-1 && VAR_13[VAR_12+VAR_11] == 0)
                VAR_11++;

        VAR_8 = ((VAR_13[0+VAR_10]&0x80)?1:0);
        VAR_9 = ((VAR_13[VAR_12+VAR_11]&0x80)?1:0);
        VAR_7 = VAR_4 + VAR_8 + VAR_12 - VAR_10 + VAR_6 +
  VAR_9 + VAR_12 - VAR_11;
        if(FUNC_0(VAR_1, (size_t) VAR_7)) {
                FUNC_3(VAR_1, VAR_3[0]);
                FUNC_3(VAR_1, VAR_7-2);
                FUNC_3(VAR_1, VAR_3[2]);
                FUNC_3(VAR_1, VAR_12 + VAR_8 - VAR_10);
                if(VAR_8)
                        FUNC_3(VAR_1, 0);
                FUNC_2(VAR_1, VAR_13+VAR_10, VAR_12-VAR_10);
                FUNC_2(VAR_1, VAR_5, VAR_6-1);
                FUNC_3(VAR_1, VAR_12 + VAR_9 - VAR_11);
                if(VAR_9)
                        FUNC_3(VAR_1, 0);
                FUNC_2(VAR_1, VAR_13+VAR_12+VAR_11, VAR_12-VAR_11);
        }
        return FUNC_1(VAR_1);
}
