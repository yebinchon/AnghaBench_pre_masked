
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*,unsigned char const*,size_t,unsigned int const*,unsigned int const*) ;
 int FUNC_1 (unsigned char*,unsigned char const*,size_t,unsigned int const*,unsigned int const*) ;
 int FUNC_2 (unsigned char*,unsigned char const*,size_t,unsigned int const*,unsigned int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_3(unsigned char *VAR_3, const unsigned char *VAR_4,
                    size_t VAR_5, const unsigned int VAR_6[8],
                    const unsigned int VAR_7[4])
{
    VAR_0 & VAR_2
        ? FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7)
        : VAR_0 & VAR_1
            ? FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7)
            : FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
}
