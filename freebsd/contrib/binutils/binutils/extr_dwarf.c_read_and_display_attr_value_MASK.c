
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uvalue ;
struct TYPE_3__ {unsigned int max_loc_offsets; unsigned int num_loc_offsets; int* loc_offsets; int* have_frame_base; unsigned long base_address; unsigned int max_range_lists; unsigned int num_range_lists; int* range_lists; } ;
typedef TYPE_1__ debug_info ;
 unsigned long VAR_0 ;

 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;






 char* FUNC_0 (char*) ;
 unsigned long FUNC_1 (unsigned char*,int) ;
 int FUNC_2 (unsigned char*,unsigned long,unsigned long,unsigned long) ;
 unsigned char* FUNC_3 (unsigned char*,unsigned long) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (unsigned long) ;
 char* FUNC_6 (unsigned long) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_7 (char*,...) ;
 unsigned long FUNC_8 (unsigned char*,unsigned int*,int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,unsigned long) ;
 void* FUNC_11 (int*,unsigned int,int) ;

__attribute__((used)) static unsigned char *
FUNC_12 (unsigned long VAR_11,
        unsigned long VAR_12,
        unsigned char *VAR_13,
        unsigned long VAR_14,
        unsigned long VAR_15,
        unsigned long VAR_16,
        int VAR_17,
        debug_info *VAR_18,
        int VAR_19)
{
  unsigned long VAR_20 = 0;
  unsigned char *VAR_21 = ((void*)0);
  unsigned int VAR_22;

  switch (VAR_12)
    {
    default:
      break;

    case 168:
      if (VAR_17 == 2)
 {
   VAR_20 = FUNC_1 (VAR_13, VAR_15);
   VAR_13 += VAR_15;
 }
      else if (VAR_17 == 3)
 {
   VAR_20 = FUNC_1 (VAR_13, VAR_16);
   VAR_13 += VAR_16;
 }
      else
 {
   FUNC_4 (FUNC_0("Internal error: DWARF version is not 2 or 3.\n"));
 }
      break;

    case 184:
      VAR_20 = FUNC_1 (VAR_13, VAR_15);
      VAR_13 += VAR_15;
      break;

    case 164:
      VAR_20 = FUNC_1 (VAR_13, VAR_16);
      VAR_13 += VAR_16;
      break;

    case 174:
      VAR_20 = 1;
      break;

    case 172:
    case 175:
    case 179:
      VAR_20 = FUNC_1 (VAR_13++, 1);
      break;

    case 171:
    case 178:
      VAR_20 = FUNC_1 (VAR_13, 2);
      VAR_13 += 2;
      break;

    case 170:
    case 177:
      VAR_20 = FUNC_1 (VAR_13, 4);
      VAR_13 += 4;
      break;

    case 166:
      VAR_20 = FUNC_8 (VAR_13, & VAR_22, 1);
      VAR_13 += VAR_22;
      break;

    case 167:
    case 163:
      VAR_20 = FUNC_8 (VAR_13, & VAR_22, 0);
      VAR_13 += VAR_22;
      break;

    case 173:
      VAR_12 = FUNC_8 (VAR_13, & VAR_22, 0);
      VAR_13 += VAR_22;
      if (!VAR_19)
 FUNC_7 (" %s", FUNC_6 (VAR_12));
      return FUNC_12 (VAR_11, VAR_12, VAR_13,
       VAR_14, VAR_15,
       VAR_16, VAR_17,
       VAR_18, VAR_19);
    }

  switch (VAR_12)
    {
    case 168:
      if (!VAR_19)
 FUNC_7 (" <#%lx>", VAR_20);
      break;

    case 172:
    case 171:
    case 170:
    case 167:
      if (!VAR_19)
 FUNC_7 (" <%lx>", VAR_20 + VAR_14);
      break;

    case 177:
    case 184:
      if (!VAR_19)
 FUNC_7 (" %#lx", VAR_20);
      break;

    case 174:
    case 175:
    case 179:
    case 178:
    case 166:
    case 163:
      if (!VAR_19)
 FUNC_7 (" %ld", VAR_20);
      break;

    case 169:
    case 176:
      if (!VAR_19)
 {
   VAR_20 = FUNC_1 (VAR_13, 4);
   FUNC_7 (" %lx", VAR_20);
   FUNC_7 (" %lx", (unsigned long) FUNC_1 (VAR_13 + 4, 4));
 }
      if ((VAR_19 || VAR_6 || VAR_7)
   && VAR_10 == 0)
 {
   if (sizeof (VAR_20) == 8)
     VAR_20 = FUNC_1 (VAR_13, 8);
   else
     FUNC_4 (FUNC_0("DW_FORM_data8 is unsupported when sizeof (unsigned long) != 8\n"));
 }
      VAR_13 += 8;
      break;

    case 165:
      if (!VAR_19)
 FUNC_7 (" %s", VAR_13);
      VAR_13 += FUNC_9 ((char *) VAR_13) + 1;
      break;

    case 183:
      VAR_20 = FUNC_8 (VAR_13, & VAR_22, 0);
      VAR_21 = VAR_13 + VAR_22;
      if (VAR_19)
 VAR_13 = VAR_21 + VAR_20;
      else
 VAR_13 = FUNC_3 (VAR_21, VAR_20);
      break;

    case 182:
      VAR_20 = FUNC_1 (VAR_13, 1);
      VAR_21 = VAR_13 + 1;
      if (VAR_19)
 VAR_13 = VAR_21 + VAR_20;
      else
 VAR_13 = FUNC_3 (VAR_21, VAR_20);
      break;

    case 181:
      VAR_20 = FUNC_1 (VAR_13, 2);
      VAR_21 = VAR_13 + 2;
      if (VAR_19)
 VAR_13 = VAR_21 + VAR_20;
      else
 VAR_13 = FUNC_3 (VAR_21, VAR_20);
      break;

    case 180:
      VAR_20 = FUNC_1 (VAR_13, 4);
      VAR_21 = VAR_13 + 4;
      if (VAR_19)
 VAR_13 = VAR_21 + VAR_20;
      else
 VAR_13 = FUNC_3 (VAR_21, VAR_20);
      break;

    case 164:
      if (!VAR_19)
 FUNC_7 (FUNC_0(" (indirect string, offset: 0x%lx): %s"),
  VAR_20, FUNC_5 (VAR_20));
      break;

    case 173:

      break;

    default:
      FUNC_10 (FUNC_0("Unrecognized form: %lu\n"), VAR_12);
      break;
    }


  if ((VAR_19 || VAR_6 || VAR_7)
      && VAR_10 == 0)
    {
      switch (VAR_11)
 {
 case 201:
   VAR_8 = 1;
 case 197:
 case 203:
 case 188:
 case 207:
 case 206:
 case 204:
 case 192:
 case 191:
 case 195:
   if (VAR_12 == 177 || VAR_12 == 176)
     {

       unsigned int VAR_23 = VAR_18->max_loc_offsets;
       unsigned int VAR_24 = VAR_18->num_loc_offsets;

       if (VAR_23 == 0 || VAR_24 >= VAR_23)
  {
    VAR_23 += 1024;
    VAR_18->loc_offsets
      = FUNC_11 (VAR_18->loc_offsets,
     VAR_23, sizeof (*VAR_18->loc_offsets));
    VAR_18->have_frame_base
      = FUNC_11 (VAR_18->have_frame_base,
     VAR_23, sizeof (*VAR_18->have_frame_base));
    VAR_18->max_loc_offsets = VAR_23;
  }
       VAR_18->loc_offsets [VAR_24] = VAR_20;
       VAR_18->have_frame_base [VAR_24] = VAR_8;
       VAR_18->num_loc_offsets++;
     }
   break;

 case 196:
   if (VAR_9)
     VAR_18->base_address = VAR_20;
   break;

 case 193:
   if (VAR_12 == 177 || VAR_12 == 176)
     {

       unsigned int VAR_25 = VAR_18->max_range_lists;
       unsigned int VAR_26 = VAR_18->num_range_lists;

       if (VAR_25 == 0 || VAR_26 >= VAR_25)
  {
    VAR_25 += 1024;
    VAR_18->range_lists
      = FUNC_11 (VAR_18->range_lists,
     VAR_25, sizeof (*VAR_18->range_lists));
    VAR_18->max_range_lists = VAR_25;
  }
       VAR_18->range_lists [VAR_26] = VAR_20;
       VAR_18->num_range_lists++;
     }
   break;

 default:
   break;
 }
    }

  if (VAR_19)
    return VAR_13;

  FUNC_7 ("\t");

  switch (VAR_11)
    {
    case 199:
      switch (VAR_20)
 {
 case 155:
   FUNC_7 (FUNC_0("(not inlined)"));
   break;
 case 156:
   FUNC_7 (FUNC_0("(inlined)"));
   break;
 case 157:
   FUNC_7 (FUNC_0("(declared as inline but ignored)"));
   break;
 case 158:
   FUNC_7 (FUNC_0("(declared as inline and inlined)"));
   break;
 default:
   FUNC_7 (FUNC_0("  (Unknown inline attribute value: %lx)"), VAR_20);
   break;
 }
      break;

    case 198:
      switch (VAR_20)
 {

 case 151: FUNC_7 ("(ANSI C)"); break;
 case 152: FUNC_7 ("(non-ANSI C)"); break;
 case 154: FUNC_7 ("(Ada)"); break;
 case 149: FUNC_7 ("(C++)"); break;
 case 148: FUNC_7 ("(Cobol 74)"); break;
 case 147: FUNC_7 ("(Cobol 85)"); break;
 case 145: FUNC_7 ("(FORTRAN 77)"); break;
 case 144: FUNC_7 ("(Fortran 90)"); break;
 case 136: FUNC_7 ("(ANSI Pascal)"); break;
 case 140: FUNC_7 ("(Modula 2)"); break;

 case 142: FUNC_7 ("(Java)"); break;
 case 150: FUNC_7 ("(ANSI C99)"); break;
 case 153: FUNC_7 ("(ADA 95)"); break;
 case 143: FUNC_7 ("(Fortran 95)"); break;

 case 137: FUNC_7 ("(PLI)"); break;
 case 139: FUNC_7 ("(Objective C)"); break;
 case 138: FUNC_7 ("(Objective C++)"); break;
 case 135: FUNC_7 ("(Unified Parallel C)"); break;
 case 146: FUNC_7 ("(D)"); break;

 case 141: FUNC_7 ("(MIPS assembler)"); break;

 case 134: FUNC_7 ("(Unified Parallel C)"); break;
 default:
   if (VAR_20 >= VAR_5 && VAR_20 <= VAR_4)
     FUNC_7 ("(implementation defined: %lx)", VAR_20);
   else
     FUNC_7 ("(Unknown: %lx)", VAR_20);
   break;
 }
      break;

    case 202:
      switch (VAR_20)
 {
 case 209: FUNC_7 ("(void)"); break;
 case 219: FUNC_7 ("(machine address)"); break;
 case 218: FUNC_7 ("(boolean)"); break;
 case 217: FUNC_7 ("(complex float)"); break;
 case 215: FUNC_7 ("(float)"); break;
 case 213: FUNC_7 ("(signed)"); break;
 case 212: FUNC_7 ("(signed char)"); break;
 case 211: FUNC_7 ("(unsigned)"); break;
 case 210: FUNC_7 ("(unsigned char)"); break;

 case 214: FUNC_7 ("(imaginary float)"); break;
 case 216: FUNC_7 ("(decimal float)"); break;
 default:
   if (VAR_20 >= VAR_1
       && VAR_20 <= VAR_0)
     FUNC_7 ("(user defined type)");
   else
     FUNC_7 ("(unknown type)");
   break;
 }
      break;

    case 208:
      switch (VAR_20)
 {
 case 220: FUNC_7 ("(public)"); break;
 case 221: FUNC_7 ("(protected)"); break;
 case 222: FUNC_7 ("(private)"); break;
 default:
   FUNC_7 ("(unknown accessibility)");
   break;
 }
      break;

    case 189:
      switch (VAR_20)
 {
 case 129: FUNC_7 ("(local)"); break;
 case 130: FUNC_7 ("(exported)"); break;
 case 128: FUNC_7 ("(qualified)"); break;
 default: FUNC_7 ("(unknown visibility)"); break;
 }
      break;

    case 190:
      switch (VAR_20)
 {
 case 133: FUNC_7 ("(none)"); break;
 case 131: FUNC_7 ("(virtual)"); break;
 case 132:FUNC_7 ("(pure_virtual)"); break;
 default: FUNC_7 ("(unknown virtuality)"); break;
 }
      break;

    case 200:
      switch (VAR_20)
 {
 case 161: FUNC_7 ("(case_sensitive)"); break;
 case 159: FUNC_7 ("(up_case)"); break;
 case 160: FUNC_7 ("(down_case)"); break;
 case 162: FUNC_7 ("(case_insensitive)"); break;
 default: FUNC_7 ("(unknown case)"); break;
 }
      break;

    case 205:
      switch (VAR_20)
 {
 case 186: FUNC_7 ("(normal)"); break;
 case 185: FUNC_7 ("(program)"); break;
 case 187: FUNC_7 ("(nocall)"); break;
 default:
   if (VAR_20 >= VAR_3
       && VAR_20 <= VAR_2)
     FUNC_7 ("(user defined)");
   else
     FUNC_7 ("(unknown convention)");
 }
      break;

    case 194:
      switch (VAR_20)
 {
 case -1: FUNC_7 ("(undefined)"); break;
 case 0: FUNC_7 ("(row major)"); break;
 case 1: FUNC_7 ("(column major)"); break;
 }
      break;

    case 201:
      VAR_8 = 1;
    case 197:
    case 203:
    case 188:
    case 207:
    case 206:
    case 204:
    case 192:
    case 191:
    case 195:
      if (VAR_21)
 {
   int VAR_27;

   FUNC_7 ("(");
   VAR_27 = FUNC_2 (VAR_21,
       VAR_15,
       VAR_20,
       VAR_14);
   FUNC_7 (")");
   if (VAR_27 && !VAR_8)
     FUNC_7 (FUNC_0(" [without DW_AT_frame_base]"));
 }
      else if (VAR_12 == 177 || VAR_12 == 176)
 FUNC_7 (FUNC_0("(location list)"));

      break;

    default:
      break;
    }

  return VAR_13;
}
