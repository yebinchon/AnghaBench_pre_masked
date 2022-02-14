
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 scalar_t__ FUNC_0 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_1(const char *VAR_10, int VAR_11, void *VAR_12)
{
    unsigned int *VAR_13 = VAR_12;
    if (VAR_10 == ((void*)0))
        return 0;
    if (FUNC_0(VAR_10, "ALL", VAR_11) == 0)
        *VAR_13 |= VAR_0;
    else if (FUNC_0(VAR_10, "RSA", VAR_11) == 0)
        *VAR_13 |= VAR_9;
    else if (FUNC_0(VAR_10, "DSA", VAR_11) == 0)
        *VAR_13 |= VAR_4;
    else if (FUNC_0(VAR_10, "DH", VAR_11) == 0)
        *VAR_13 |= VAR_2;
    else if (FUNC_0(VAR_10, "EC", VAR_11) == 0)
        *VAR_13 |= VAR_5;
    else if (FUNC_0(VAR_10, "RAND", VAR_11) == 0)
        *VAR_13 |= VAR_8;
    else if (FUNC_0(VAR_10, "CIPHERS", VAR_11) == 0)
        *VAR_13 |= VAR_1;
    else if (FUNC_0(VAR_10, "DIGESTS", VAR_11) == 0)
        *VAR_13 |= VAR_3;
    else if (FUNC_0(VAR_10, "PKEY", VAR_11) == 0)
        *VAR_13 |= VAR_7 | VAR_6;
    else if (FUNC_0(VAR_10, "PKEY_CRYPTO", VAR_11) == 0)
        *VAR_13 |= VAR_7;
    else if (FUNC_0(VAR_10, "PKEY_ASN1", VAR_11) == 0)
        *VAR_13 |= VAR_6;
    else
        return 0;
    return 1;
}
