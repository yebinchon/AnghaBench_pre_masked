
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int eOptions ;
struct TYPE_4__ {int visit_cols; scalar_t__ aspect_ratio; void* no_mouse; void* visit_items; void* tab_len; int output; void* use_shadow; void* use_scrollbar; void* separate_str; } ;
struct TYPE_3__ {int defaultno; char* week_start; void* iso_week; void* reorder; void* no_tags; void* no_items; void* begin_x; void* begin_y; void* begin_set; void* ascii_lines; void* no_lines; void* keep_tite; void* time_format; void* date_format; void* help_label; void* exit_label; void* extra_label; void* cancel_label; void* ok_label; void* no_label; void* yes_label; void* dlg_clear_screen; void* trim_whitespace; void* max_input; void* timeout_secs; void* sleep_secs; void* tab_correct; void* column_separator; void* output_separator; void* print_siz; void* last_key; void* keep_window; void* extra_button; void* help_tags; void* help_status; void* help_button; void* help_file; void* help_line; void* item_help; void* insecure; void* default_item; int default_button; void* beep_after_signal; void* beep_signal; void* size_err; void* single_quoted; void* quoted; void* nook; void* nocancel; void* cant_kill; void* nocollapse; void* no_nl_expand; void* cr_wrap; void* colors; void* separate_output; void* backtitle; void* title; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 void* VAR_2 ;
 int FUNC_1 (char**,int) ;
 int FUNC_2 (char**,int*,int ) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int FUNC_4 (void*) ;
 TYPE_2__ VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int,int) ;
 void* VAR_8 ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 () ;
 void* FUNC_9 (char**,int*) ;
 void* FUNC_10 (char**,int*) ;
 int FUNC_11 (char**,int*) ;

__attribute__((used)) static int
FUNC_12(int VAR_9, char **VAR_10, int VAR_11, bool VAR_12)
{
    bool VAR_13 = VAR_2;
    eOptions VAR_14;

    FUNC_0(("# process_common_options, offset %d\n", VAR_11));

    while (VAR_11 < VAR_9 && !VAR_13) {
 FUNC_0(("#\targv[%d] = %s\n", VAR_11, VAR_10[VAR_11]));
 switch (VAR_14 = FUNC_7(VAR_10[VAR_11], 1)) {
 case 137:
     VAR_7.title = FUNC_9(VAR_10, &VAR_11);
     break;
 case 207:
     VAR_7.backtitle = FUNC_9(VAR_10, &VAR_11);
     break;
 case 148:
     VAR_6.separate_str = FUNC_9(VAR_10, &VAR_11);
     break;
 case 149:
     VAR_7.separate_output = VAR_5;
     break;
 case 201:
     VAR_7.colors = VAR_5;
     break;
 case 199:
     VAR_7.cr_wrap = VAR_5;
     break;
 case 165:
     VAR_7.no_nl_expand = VAR_5;
     break;
 case 172:
     VAR_7.nocollapse = VAR_5;
     break;
 case 169:
     VAR_7.cant_kill = VAR_5;
     break;
 case 162:
     VAR_7.nocancel = VAR_5;
     break;
 case 161:
     VAR_7.nook = VAR_5;
     break;
 case 153:
     VAR_7.quoted = VAR_5;
     break;
 case 145:
     VAR_7.single_quoted = VAR_5;
     break;
 case 144:
     VAR_7.size_err = VAR_5;
     break;
 case 206:
     VAR_7.beep_signal = VAR_5;
     break;
 case 205:
     VAR_7.beep_after_signal = VAR_5;
     break;
 case 150:
     VAR_6.use_scrollbar = VAR_5;
     break;
 case 146:
     VAR_6.use_shadow = VAR_5;
     break;
 case 195:
     VAR_7.defaultno = VAR_5;
     VAR_7.default_button = VAR_1;
     break;
 case 197:
     VAR_7.default_button = FUNC_4(FUNC_9(VAR_10, &VAR_11));
     VAR_7.defaultno = VAR_7.default_button == VAR_1;
     break;
 case 196:
     VAR_7.default_item = FUNC_9(VAR_10, &VAR_11);
     break;
 case 181:
     VAR_7.insecure = VAR_5;
     break;
 case 179:
     VAR_7.item_help = VAR_5;
     break;
 case 186:
     VAR_7.help_line = FUNC_9(VAR_10, &VAR_11);
     break;
 case 188:
     VAR_7.help_file = FUNC_9(VAR_10, &VAR_11);
     break;
 case 189:
     VAR_7.help_button = VAR_5;
     break;
 case 185:
     VAR_7.help_status = VAR_5;
     break;
 case 184:
     VAR_7.help_tags = VAR_5;
     break;
 case 193:
     VAR_7.extra_button = VAR_5;
     break;
 case 182:
     VAR_8 = VAR_5;
     break;
 case 176:
     VAR_7.keep_window = VAR_5;
     break;
 case 175:
     VAR_7.last_key = VAR_5;
     break;
 case 164:
     VAR_6.use_shadow = VAR_2;
     break;
 case 157:
     VAR_7.print_siz = VAR_5;
     break;
 case 156:
 case 155:
     FUNC_2(VAR_10, &VAR_11, VAR_14);
     break;
 case 158:
     if (VAR_12) {
  FUNC_1(VAR_10, VAR_11);
  FUNC_5(VAR_6.output);
  FUNC_6(VAR_6.output, "MaxSize: %d, %d\n", VAR_4, VAR_3);
     }
     break;
 case 154:
     if (VAR_12) {
  FUNC_3(VAR_6.output);
     }
     break;
 case 147:
 case 159:
     VAR_7.output_separator = FUNC_9(VAR_10, &VAR_11);
     break;
 case 200:
     VAR_7.column_separator = FUNC_9(VAR_10, &VAR_11);
     break;
 case 141:
     VAR_7.tab_correct = VAR_5;
     break;
 case 143:
     VAR_7.sleep_secs = FUNC_10(VAR_10, &VAR_11);
     break;
 case 138:
     VAR_7.timeout_secs = FUNC_10(VAR_10, &VAR_11);
     break;
 case 174:
     VAR_7.max_input = FUNC_10(VAR_10, &VAR_11);
     break;
 case 140:
     VAR_6.tab_len = FUNC_10(VAR_10, &VAR_11);
     break;
 case 134:
     VAR_7.trim_whitespace = VAR_5;
     break;
 case 131:
     VAR_6.visit_items = VAR_5;
     VAR_6.visit_cols = 1;
     break;
 case 209:
     VAR_6.aspect_ratio = FUNC_10(VAR_10, &VAR_11);
     break;
 case 204:
     VAR_7.begin_set = VAR_5;
     VAR_7.begin_y = FUNC_10(VAR_10, &VAR_11);
     VAR_7.begin_x = FUNC_10(VAR_10, &VAR_11);
     break;
 case 202:
     VAR_7.dlg_clear_screen = VAR_5;
     break;
 case 128:
     VAR_7.yes_label = FUNC_9(VAR_10, &VAR_11);
     break;
 case 168:
     VAR_7.no_label = FUNC_9(VAR_10, &VAR_11);
     break;
 case 160:
     VAR_7.ok_label = FUNC_9(VAR_10, &VAR_11);
     break;
 case 203:
     VAR_7.cancel_label = FUNC_9(VAR_10, &VAR_11);
     break;
 case 192:
     VAR_7.extra_label = FUNC_9(VAR_10, &VAR_11);
     break;
 case 194:
     VAR_7.exit_label = FUNC_9(VAR_10, &VAR_11);
     break;
 case 187:
     VAR_7.help_label = FUNC_9(VAR_10, &VAR_11);
     break;
 case 198:
     VAR_7.date_format = FUNC_9(VAR_10, &VAR_11);
     break;
 case 139:
     VAR_7.time_format = FUNC_9(VAR_10, &VAR_11);
     break;
 case 177:
     VAR_7.keep_tite = VAR_5;
     break;
 case 210:
     VAR_7.ascii_lines = VAR_5;
     VAR_7.no_lines = VAR_2;
     break;
 case 167:
     VAR_7.no_lines = VAR_5;
     VAR_7.ascii_lines = VAR_2;
     break;
 case 166:
     VAR_6.no_mouse = VAR_5;
     FUNC_8();
     break;
 case 183:
 case 129:
     (void) FUNC_9(VAR_10, &VAR_11);

 case 211:
 case 208:
 case 191:
 case 178:
 case 173:
 case 171:
 case 151:
 case 142:
 case 133:
     break;
 case 132:
     if (VAR_8)
  break;

 default:
     VAR_13 = VAR_5;
     break;
 case 180:
     VAR_7.iso_week = VAR_5;
     if (VAR_7.week_start == 0) {
  static char VAR_15[] = "1";
  VAR_7.week_start = VAR_15;
     }
     break;
 }
 if (!VAR_13)
     VAR_11++;
    }

    if (VAR_6.aspect_ratio == 0)
 VAR_6.aspect_ratio = VAR_0;

    return VAR_11;
}
