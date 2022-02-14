
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* UINT8 ;
typedef int UINT32 ;
typedef int BOOLEAN ;
typedef int ACPI_STATUS ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (char*) ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 char* VAR_18 ;
 size_t VAR_19 ;
 int FUNC_3 (int,char**,int ) ;
 int FUNC_4 (int,char**) ;
 int FUNC_5 () ;
 int VAR_20 ;
 int FUNC_6 (char*) ;
 int FUNC_7 () ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 () ;
 void* VAR_21 ;
 void* VAR_22 ;
 void* VAR_23 ;
 void* VAR_24 ;
 void* VAR_25 ;
 void* VAR_26 ;
 void* VAR_27 ;
 void* VAR_28 ;
 void* VAR_29 ;
 void* VAR_30 ;
 void* VAR_31 ;
 void* VAR_32 ;
 void* VAR_33 ;
 void* VAR_34 ;
 void* VAR_35 ;
 void* VAR_36 ;
 void* VAR_37 ;
 void* VAR_38 ;
 void* VAR_39 ;
 void* VAR_40 ;
 void* VAR_41 ;
 char* VAR_42 ;
 void* VAR_43 ;
 int VAR_44 ;
 void* VAR_45 ;
 void* VAR_46 ;
 void* VAR_47 ;
 int VAR_48 ;
 void* VAR_49 ;
 void* VAR_50 ;
 void* VAR_51 ;
 void* VAR_52 ;
 void* VAR_53 ;
 void* VAR_54 ;
 char* VAR_55 ;
 void* VAR_56 ;
 void* VAR_57 ;
 void* VAR_58 ;
 void* VAR_59 ;
 void* VAR_60 ;
 void* VAR_61 ;
 void* VAR_62 ;
 void* VAR_63 ;
 void* VAR_64 ;
 void* VAR_65 ;
 void* VAR_66 ;
 void* VAR_67 ;
 void* VAR_68 ;
 void* VAR_69 ;
 int VAR_70 ;
 void* VAR_71 ;
 int VAR_72 ;
 void* VAR_73 ;
 int FUNC_12 (char*) ;
 int VAR_74 ;
 int VAR_75 ;
 int VAR_76 ;
 int FUNC_13 (char*,int *,void*) ;
 int VAR_77 ;
 void* VAR_78 ;
 int FUNC_14 () ;
 int FUNC_15 (char*) ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 (int) ;
 int FUNC_19 (char*,...) ;
 int FUNC_20 (char*,int *,int) ;

__attribute__((used)) static int
FUNC_21 (
    int VAR_79,
    char **VAR_80,
    BOOLEAN VAR_81)
{
    ACPI_STATUS VAR_82;
    UINT32 VAR_83;




    while ((VAR_83 = FUNC_3 (VAR_79, VAR_80, VAR_3)) != VAR_0) switch (VAR_83)
    {
    case '@':

        if (VAR_81)
        {
            FUNC_19 ("Nested command files are not supported\n");
            return (-1);
        }

        if (FUNC_8 (VAR_18))
        {
            return (-1);
        }
        break;

    case 'a':

        switch (VAR_18[0])
        {
        case 'r':

            VAR_41 = VAR_78;
            break;

        default:

            FUNC_19 ("Unknown option: -a%s\n", VAR_18);
            return (-1);
        }

        break;


    case 'b':

        switch (VAR_18[0])
        {

        case 'c':

            FUNC_19 ("Debug ASL to ASL+ conversion\n");

            VAR_34 = VAR_78;
            VAR_43 = VAR_73;
            VAR_46 = VAR_73;
            VAR_63 = VAR_73;
            VAR_54 = VAR_73;
            VAR_8 = VAR_78;
            VAR_14 = VAR_73;
            VAR_10 = VAR_78;
            VAR_12 = VAR_78;
            VAR_36 = VAR_78;

            return (0);

        case 'f':

            VAR_20 = 1;
            VAR_72 = 1;
            VAR_77 = 1;
            VAR_29 = VAR_78;
            VAR_47 = VAR_78;
            break;

        case 'p':



            if (FUNC_4 (VAR_79, VAR_80))
            {
                return (-1);
            }

            VAR_61 = VAR_78;
            VAR_60 = (UINT8) FUNC_20 (VAR_18, ((void*)0), 0);
            break;

        case 's':

            VAR_29 = VAR_78;
            break;

        case 't':



            if (FUNC_4 (VAR_79, VAR_80))
            {
                return (-1);
            }

            VAR_62 = (UINT8) FUNC_20 (VAR_18, ((void*)0), 0);
            break;

        default:

            FUNC_19 ("Unknown option: -b%s\n", VAR_18);
            return (-1);
        }

        break;

    case 'c':

        switch (VAR_18[0])
        {

        case 'a':

            FUNC_19 ("Convert ASL to ASL+ with comments\n");
            VAR_34 = VAR_78;
            VAR_43 = VAR_73;
            VAR_46 = VAR_73;
            VAR_63 = VAR_73;
            VAR_54 = VAR_73;
            VAR_8 = VAR_78;
            VAR_14 = VAR_73;
            VAR_12 = VAR_78;
            VAR_36 = VAR_78;

            return (0);

        case 'r':

            VAR_52 = VAR_78;
            break;

        default:

            FUNC_19 ("Unknown option: -c%s\n", VAR_18);
            return (-1);
        }
        break;

    case 'd':

        switch (VAR_18[0])
        {
        case '^':

            VAR_35 = VAR_73;
            break;

        case 'a':

            VAR_35 = VAR_73;
            VAR_30 = VAR_78;
            break;

        case 'b':

            VAR_17 = VAR_78;
            break;

        case 'c':

            break;

        case 'f':

            VAR_15 = VAR_78;
            break;

        case 'l':

            VAR_35 = VAR_73;
            VAR_9 = VAR_73;
            break;

        default:

            FUNC_19 ("Unknown option: -d%s\n", VAR_18);
            return (-1);
        }

        VAR_11 = VAR_78;
        break;

    case 'D':

        FUNC_13 (VAR_18, ((void*)0), VAR_78);
        break;

    case 'e':



        VAR_19--;
        VAR_80[VAR_19] = VAR_18;

        while (VAR_80[VAR_19] &&
              (VAR_80[VAR_19][0] != '-'))
        {
            VAR_82 = FUNC_2 (VAR_80[VAR_19]);
            if (FUNC_1 (VAR_82))
            {
                FUNC_19 ("Could not add %s to external list\n",
                    VAR_80[VAR_19]);
                return (-1);
            }

            VAR_19++;
        }
        break;

    case 'f':

        switch (VAR_18[0])
        {
        case '^':

            VAR_45 = VAR_78;
            break;

        case 'e':

            if (FUNC_4 (VAR_79, VAR_80))
            {
                return (-1);
            }

            VAR_42 = VAR_18;
            break;

        default:

            FUNC_19 ("Unknown option: -f%s\n", VAR_18);
            return (-1);
        }
        break;

    case 'G':

        VAR_26 = VAR_78;
        break;

    case 'g':

        FUNC_19 ("-g option is deprecated, use acpidump utility instead\n");
        FUNC_18 (1);

    case 'h':

        switch (VAR_18[0])
        {
        case '^':

            FUNC_14 ();
            FUNC_18 (0);

        case 'c':

            FUNC_16 ();
            FUNC_18 (0);

        case 'd':

            FUNC_7 ();
            FUNC_18 (0);

        case 'f':

            FUNC_11 ();
            FUNC_18 (0);

        case 'r':



            FUNC_5 ();
            FUNC_18 (0);

        case 't':

            FUNC_17 ();
            FUNC_18 (0);

        default:

            FUNC_19 ("Unknown option: -h%s\n", VAR_18);
            return (-1);
        }

    case 'I':

        FUNC_12 (VAR_18);
        break;

    case 'i':

        switch (VAR_18[0])
        {
        case 'a':



            VAR_21 = VAR_78;
            break;

        case 'c':



            VAR_23 = VAR_78;
            break;

        case 'n':



            VAR_16 = VAR_78;
            break;

        default:

            FUNC_19 ("Unknown option: -i%s\n", VAR_18);
            return (-1);
        }
        break;

    case 'l':

        switch (VAR_18[0])
        {
        case '^':



            VAR_49 = VAR_78;
            VAR_13 = VAR_78;
            break;

        case 'i':



            VAR_59 = VAR_78;
            break;

        case 'm':



            VAR_50 = VAR_78;
            break;

        case 'n':



            VAR_53 = VAR_78;
            break;

        case 's':



            VAR_65 = VAR_78;
            break;

        case 'x':



            VAR_28 = VAR_78;
            break;

        default:

            FUNC_19 ("Unknown option: -l%s\n", VAR_18);
            return (-1);
        }
        break;

    case 'm':

        VAR_48 = (UINT32) FUNC_20 (VAR_18, ((void*)0), 0) * 1024;
        if (VAR_48 < VAR_2)
        {
            VAR_48 = VAR_2;
        }
        FUNC_19 ("Line Buffer Size: %u\n", VAR_48);
        break;

    case 'n':

        VAR_56 = VAR_78;
        break;

    case 'o':

        switch (VAR_18[0])
        {
        case 'a':



            VAR_43 = VAR_73;
            VAR_46 = VAR_73;
            VAR_63 = VAR_73;
            VAR_54 = VAR_73;

            break;

        case 'c':



            VAR_27 = VAR_78;
            break;

        case 'd':



            VAR_14 = VAR_73;
            break;

        case 'e':



            VAR_12 = VAR_78;
            break;

        case 'E':






            VAR_36 = VAR_78;
            break;

        case 'f':



            VAR_43 = VAR_73;
            break;

        case 'i':



            VAR_46 = VAR_73;
            break;

        case 'n':



            VAR_63 = VAR_73;
            break;

        case 't':



            VAR_39 = VAR_73;
            break;

        default:

            FUNC_19 ("Unknown option: -c%s\n", VAR_18);
            return (-1);
        }
        break;

    case 'P':

        switch (VAR_18[0])
        {
        case '^':

            VAR_58 = VAR_78;
            VAR_59 = VAR_78;
            break;

        case 'n':

            VAR_57 = VAR_73;
            break;

        default:

            FUNC_19 ("Unknown option: -P%s\n", VAR_18);
            return (-1);
        }
        break;

    case 'p':

        VAR_55 = VAR_18;
        FUNC_15 (VAR_55);
        VAR_66 = VAR_73;
        break;

    case 'q':

        FUNC_19 ("Convert ASL to ASL+ with comments\n");
        VAR_43 = VAR_73;
        VAR_46 = VAR_73;
        VAR_63 = VAR_73;
        VAR_54 = VAR_73;
        VAR_36 = VAR_78;
        VAR_8 = VAR_78;
        return (0);

    case 'r':

        VAR_64 = (UINT8) FUNC_20 (VAR_18, ((void*)0), 0);
        break;

    case 's':

        switch (VAR_18[0])
        {
        case 'a':



            VAR_22 = VAR_78;
            break;

        case 'c':



            VAR_25 = VAR_78;
            break;

        case 'o':



            VAR_24 = VAR_78;
            break;

        default:

            FUNC_19 ("Unknown option: -s%s\n", VAR_18);
            return (-1);
        }
        break;

    case 't':

        switch (VAR_18[0])
        {
        case 'a':

            VAR_44 = VAR_75;
            break;

        case 'c':

            VAR_44 = VAR_76;
            break;

    case 'p':

            VAR_40 = VAR_78;
            break;

        case 's':

            VAR_44 = VAR_74;
            break;

        default:

            FUNC_19 ("Unknown option: -t%s\n", VAR_18);
            return (-1);
        }
        break;

    case 'T':

        VAR_38 = VAR_78;
        break;

    case 'v':

        switch (VAR_18[0])
        {
        case '^':

            FUNC_19 (FUNC_0 (VAR_1));
            FUNC_18 (0);

        case 'a':



            VAR_51 = VAR_78;
            break;

        case 'e':



            VAR_32 = VAR_73;
            VAR_33 = VAR_73;
            break;

        case 'i':
            VAR_68 = VAR_73;
            VAR_37 = VAR_73;
            break;

        case 'o':

            VAR_31 = VAR_78;
            break;

        case 'r':

            VAR_32 = VAR_73;
            break;

        case 's':

            VAR_37 = VAR_73;
            break;

        case 't':

            VAR_69 = VAR_78;
            break;

        case 'w':



            if (FUNC_4 (VAR_79, VAR_80))
            {
                return (-1);
            }

            VAR_82 = FUNC_6 (VAR_18);
            if (FUNC_1 (VAR_82))
            {
                return (-1);
            }
            break;

        case 'x':



            if (FUNC_4 (VAR_79, VAR_80))
            {
                return (-1);
            }

            VAR_82 = FUNC_10 (VAR_18);
            if (FUNC_1 (VAR_82))
            {
                return (-1);
            }
            break;

        default:

            FUNC_19 ("Unknown option: -v%s\n", VAR_18);
            return (-1);
        }
        break;

    case 'w':

        switch (VAR_18[0])
        {
        case '1':

            VAR_70 = VAR_4;
            break;

        case '2':

            VAR_70 = VAR_5;
            break;

        case '3':

            VAR_70 = VAR_6;
            break;

        case 'e':

            VAR_71 = VAR_78;
            break;

        case 'w':



            if (FUNC_4 (VAR_79, VAR_80))
            {
                return (-1);
            }

            VAR_82 = FUNC_9 (VAR_18);
            if (FUNC_1 (VAR_82))
            {
                return (-1);
            }
            break;


        default:

            FUNC_19 ("Unknown option: -w%s\n", VAR_18);
            return (-1);
        }
        break;

    case 'x':

        VAR_7 = FUNC_20 (VAR_18, ((void*)0), 16);
        break;

    case 'z':

        VAR_67 = VAR_78;
        break;

    default:

        return (-1);
    }

    return (0);
}
