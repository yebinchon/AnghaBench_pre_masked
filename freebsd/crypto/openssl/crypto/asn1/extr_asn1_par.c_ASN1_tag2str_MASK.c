
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;

const char *FUNC_0(int VAR_2)
{
    static const char *const VAR_3[] = {

        "EOC", "BOOLEAN", "INTEGER", "BIT STRING", "OCTET STRING",

        "NULL", "OBJECT", "OBJECT DESCRIPTOR", "EXTERNAL", "REAL",

        "ENUMERATED", "<ASN1 11>", "UTF8STRING", "<ASN1 13>",

        "<ASN1 14>", "<ASN1 15>", "SEQUENCE", "SET",

        "NUMERICSTRING", "PRINTABLESTRING", "T61STRING",

        "VIDEOTEXSTRING", "IA5STRING", "UTCTIME", "GENERALIZEDTIME",

        "GRAPHICSTRING", "VISIBLESTRING", "GENERALSTRING",

        "UNIVERSALSTRING", "<ASN1 29>", "BMPSTRING"
    };

    if ((VAR_2 == VAR_1) || (VAR_2 == VAR_0))
        VAR_2 &= ~0x100;

    if (VAR_2 < 0 || VAR_2 > 30)
        return "(unknown)";
    return VAR_3[VAR_2];
}
